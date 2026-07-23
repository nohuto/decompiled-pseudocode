/*
 * XREFs of sub_140A4FD14 @ 0x140A4FD14
 * Callers:
 *     sub_140A4EEAC @ 0x140A4EEAC (sub_140A4EEAC.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140A4FD14()
{
  char *v0; // rax
  __m128i v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[0].m128i_i32[0] = 2305;
  v2[0].m128i_i8[4] = v2[0].m128i_i8[4] & 0xE3 | 4;
  v2[9].m128i_i64[1] = (__int64)sub_14038DB80;
  v0 = sub_14026DFC0(1);
  v2[2] = _mm_load_si128((const __m128i *)&xmmword_140024EF0);
  v2[1].m128i_i64[1] = (__int64)v0;
  v2[0].m128i_i8[7] = 17;
  return sub_14030CF90(v2);
}
