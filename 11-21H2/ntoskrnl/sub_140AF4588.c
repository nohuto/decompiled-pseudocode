/*
 * XREFs of sub_140AF4588 @ 0x140AF4588
 * Callers:
 *     sub_140AF463C @ 0x140AF463C (sub_140AF463C.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140AF4588()
{
  char *v0; // rbx
  __m128i v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v0 = sub_14026DFC0(3);
  v2[0].m128i_i32[0] = 2567;
  v2[2] = _mm_load_si128((const __m128i *)&xmmword_140024EF0);
  v2[0].m128i_i8[4] = v2[0].m128i_i8[4] & 0xE3 | 4;
  v2[9].m128i_i64[1] = (__int64)sub_140B1A1B0;
  v2[1].m128i_i64[1] = (__int64)v0;
  v2[0].m128i_i8[7] = sub_1402CF4F0((__int64)v0);
  sub_14030CF90(v2);
  return sub_1402B0CE0((__int64)v0, v2[0].m128i_u8[7]);
}
