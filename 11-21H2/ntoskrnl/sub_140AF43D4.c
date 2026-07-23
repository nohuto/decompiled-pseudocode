/*
 * XREFs of sub_140AF43D4 @ 0x140AF43D4
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF4470 @ 0x140AF4470 (sub_140AF4470.c)
 */

__int64 sub_140AF43D4()
{
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[2] = _mm_load_si128((const __m128i *)&xmmword_140024FC0);
  v1[9].m128i_i64[1] = (__int64)sub_140AF4470;
  v1[0].m128i_i32[0] = 67584;
  sub_140AF4470(v1, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  return sub_14030CF90(v1);
}
