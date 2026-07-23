/*
 * XREFs of sub_140A1392C @ 0x140A1392C
 * Callers:
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A13D98 @ 0x140A13D98 (sub_140A13D98.c)
 *     sub_140A14374 @ 0x140A14374 (sub_140A14374.c)
 */

_BOOL8 __fastcall sub_140A1392C(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // ebx
  _BYTE v11[96]; // [rsp+30h] [rbp-88h] BYREF

  memset(v11, 0, 0x56uLL);
  if ( a3 && (v9 = sub_140A13D98(v11, v7, a3), v9 < 0) || (v9 = sub_140A14374(a1, v7, 7, v8, (__int64)v11, a4), v9 < 0) )
    sub_1406E0C3C(1LL, (__int64)"SdbGetPathCustomSdb");
  else
    v9 = 0;
  return v9 >= 0;
}
