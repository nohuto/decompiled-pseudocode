/*
 * XREFs of sub_140502744 @ 0x140502744
 * Callers:
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403BF834 @ 0x1403BF834 (sub_1403BF834.c)
 *     sub_1403DCCB0 @ 0x1403DCCB0 (sub_1403DCCB0.c)
 *     unknown_libname_2 @ 0x1405028DC (unknown_libname_2.c)
 *     sub_140502908 @ 0x140502908 (sub_140502908.c)
 */

__int64 sub_140502744(
        char *a1,
        unsigned __int64 a2,
        char **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const char *a6,
        ...)
{
  int v9; // ebx
  char *v10; // r12
  unsigned __int64 v11; // r14
  const char *v12; // r9
  unsigned __int64 v13; // rax
  char *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v16[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v9 = sub_1403DCCB0((__int64)a1, a2, (__int64)a3, a5);
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v15 = a1;
    v10 = a1;
    v16[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &File;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v16[0] = 0LL;
      v9 = sub_1403BF834(a1, a2, v16, v12, va);
      v13 = v16[0];
      v11 = a2 - v16[0];
      v16[0] = a2 - v16[0];
      v10 = &a1[v13];
      v15 = &a1[v13];
      if ( v9 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          unknown_libname_2(&a1[v13], v11, a5);
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_15:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_140502908(a1, a2, 0LL, &v15, v16, a5);
      v10 = v15;
      v11 = v16[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_15;
  }
  return (unsigned int)v9;
}
