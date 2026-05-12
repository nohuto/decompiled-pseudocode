/*
 * XREFs of sub_1C005C004 @ 0x1C005C004
 * Callers:
 *     sub_1C005786C @ 0x1C005786C (sub_1C005786C.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005C1BC @ 0x1C005C1BC (sub_1C005C1BC.c)
 *     sub_1C005C278 @ 0x1C005C278 (sub_1C005C278.c)
 */

__int64 sub_1C005C004(_BYTE *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 *a4, int a5, char *a6, ...)
{
  int v7; // ebx
  _BYTE *v10; // r13
  unsigned __int64 v11; // r14
  char *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _BYTE *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v7 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v7 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = byte_1C0082FE6;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v7 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = sub_1C005C278(a1, a2, v17);
      v14 = v17[0];
      v7 = v13;
      v11 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v10 = &a1[v14];
      v16 = &a1[v14];
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          memset_0(v10 + 1, (unsigned __int8)a5, v11 - 1);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v7;
      }
      v7 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_1C005C1BC(a1, a2, a3, &v16, v17, a5);
      v10 = v16;
      v11 = v17[0];
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      goto LABEL_22;
  }
  return (unsigned int)v7;
}
