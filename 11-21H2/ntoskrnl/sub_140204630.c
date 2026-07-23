/*
 * XREFs of sub_140204630 @ 0x140204630
 * Callers:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 *     sub_1409E41F8 @ 0x1409E41F8 (sub_1409E41F8.c)
 *     sub_140A30CA8 @ 0x140A30CA8 (sub_140A30CA8.c)
 *     sub_140A30DE4 @ 0x140A30DE4 (sub_140A30DE4.c)
 *     sub_140B1009C @ 0x140B1009C (sub_140B1009C.c)
 * Callees:
 *     sub_1402DFCC8 @ 0x1402DFCC8 (sub_1402DFCC8.c)
 *     unknown_libname_3 @ 0x14055F3B8 (unknown_libname_3.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 */

__int64 sub_140204630(_WORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int a5, const WCHAR *a6, ...)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  _WORD *v11; // r12
  const WCHAR *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v7 = a2 >> 1;
  v10 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v11 = a1;
    v17[0] = a2 >> 1;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &word_1404370A0;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v10 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *a1 = 0;
    }
    else if ( v7 )
    {
      v17[0] = 0LL;
      v13 = sub_1402DFCC8(a1, v7, v17, v12, va);
      v14 = v17[0];
      v10 = v13;
      v7 -= v17[0];
      v17[0] = v7;
      v11 = &a1[v14];
      v16 = v11;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 )
          unknown_libname_3(&a1[v14], (a2 & 1) + 2 * v7, a5);
        goto LABEL_12;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_12:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_14055F3E4(a1, a2, a3, &v16, v17, a5);
      v11 = v16;
      v7 = v17[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_12;
  }
  return (unsigned int)v10;
}
