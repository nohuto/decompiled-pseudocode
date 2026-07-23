/*
 * XREFs of sub_140A4FA24 @ 0x140A4FA24
 * Callers:
 *     sub_140A4EEAC @ 0x140A4EEAC (sub_140A4EEAC.c)
 *     sub_140A4F9F4 @ 0x140A4F9F4 (sub_140A4F9F4.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140A4FA24(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __m128i v4; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-D8h] BYREF

  v4.m128i_i64[1] = a2;
  v4.m128i_i64[0] = a1;
  memset(v6, 0, sizeof(v6));
  v6[0].m128i_i32[0] = a3 | 0x901;
  v6[9].m128i_i64[1] = (__int64)sub_140A4F8B0;
  v6[1].m128i_i64[1] = (__int64)sub_14026DFC0(3);
  v6[0].m128i_i8[7] = 17;
  v6[2] = v4;
  return sub_14030CF90(v6);
}
