#include <stdio.h>

int age(int n)
{
    if(n == 1)
    {
        return 10;  // 递归出口：第1个学生10岁
    }
    return age(n - 1) + 2;
}

int main()
{
    printf("第5个学生的年龄：%d\n", age(5));
    return 0;
}
