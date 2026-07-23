/*
 * XREFs of sub_140597FAC @ 0x140597FAC
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     sub_14026C744 @ 0x14026C744 (sub_14026C744.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140597FAC(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v7[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v8[18]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7[0] = 1;
  sub_14026C744(0LL, 0LL, 0, 0LL, (__int64)v8);
  sub_14027449C(a2, 1);
  return sub_14027FEF8(v8, a1, a2, a3, v7);
}
