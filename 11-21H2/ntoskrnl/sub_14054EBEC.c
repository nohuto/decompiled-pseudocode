/*
 * XREFs of sub_14054EBEC @ 0x14054EBEC
 * Callers:
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054EBEC(__int64 a1, __int128 *a2, int a3)
{
  __int128 v6; // xmm0
  _OWORD v8[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  v6 = *a2;
  *((_QWORD *)&v8[0] + 1) = a1;
  v8[1] = v6;
  LODWORD(v8[2]) = a3 != 0;
  return sub_140358A20(2u, 248, 0, (__int64)v8);
}
