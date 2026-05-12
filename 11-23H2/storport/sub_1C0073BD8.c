/*
 * XREFs of sub_1C0073BD8 @ 0x1C0073BD8
 * Callers:
 *     sub_1C00722C8 @ 0x1C00722C8 (sub_1C00722C8.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C0073BD8(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      a1[v5] = 0;
    }
  }
  else
  {
    v4 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  return v4;
}
