/*
 * XREFs of sub_140AF3514 @ 0x140AF3514
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF3B50 @ 0x140AF3B50 (sub_140AF3B50.c)
 */

__int64 __fastcall sub_140AF3514(__int64 a1)
{
  __m128i v3[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[2] = _mm_load_si128((const __m128i *)&xmmword_140024EF0);
  v3[9].m128i_i64[1] = (__int64)sub_140AF3B50;
  v3[10].m128i_i64[1] = a1;
  v3[0].m128i_i32[0] = 67584;
  sub_140AF3B50(v3, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  return sub_14030CF90(v3);
}
