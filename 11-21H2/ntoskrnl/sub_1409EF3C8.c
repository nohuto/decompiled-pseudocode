/*
 * XREFs of sub_1409EF3C8 @ 0x1409EF3C8
 * Callers:
 *     sub_14088399A @ 0x14088399A (sub_14088399A.c)
 *     sub_1409F209C @ 0x1409F209C (sub_1409F209C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409F1DF4 @ 0x1409F1DF4 (sub_1409F1DF4.c)
 */

__int64 __fastcall sub_1409EF3C8(ULONG_PTR BugCheckParameter2, __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdi
  unsigned int i; // ebx
  int v9; // r8d
  int v10; // r14d
  int v11; // eax
  int v13; // [rsp+40h] [rbp-258h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-250h]
  _BYTE v15[512]; // [rsp+50h] [rbp-248h] BYREF

  v13 = 0;
  v4 = 0;
  v14 = a3;
  if ( *a3 < 0xFFFF800000000000uLL )
  {
    v7 = *(_QWORD *)(a2 + 2544);
    if ( !v7 )
      return v4;
  }
  else
  {
    LODWORD(v7) = BugCheckParameter2 + 752;
  }
  for ( i = 0; i < a4; i += v10 )
  {
    v9 = (_DWORD)a3 + 8 * i;
    v10 = 64;
    if ( a4 - i < 0x40 )
      v10 = a4 - i;
    sub_1409F1DF4(v7, BugCheckParameter2 + 16, v9, v10, (__int64)v15, 64, (__int64)&v13);
    if ( v13 )
    {
      v11 = sub_1409EF4C4(BugCheckParameter2);
      v4 += v11;
      if ( v11 != v13 )
        break;
    }
    LODWORD(a3) = (_DWORD)v14;
  }
  return v4;
}
