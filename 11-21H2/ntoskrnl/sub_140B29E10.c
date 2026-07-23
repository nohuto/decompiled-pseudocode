/*
 * XREFs of sub_140B29E10 @ 0x140B29E10
 * Callers:
 *     sub_140B29DA0 @ 0x140B29DA0 (sub_140B29DA0.c)
 * Callees:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140B29E10()
{
  __int64 v1; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v2[11]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v1 = 0LL;
  v2[10].m128i_i64[1] = (__int64)&v1;
  v2[2].m128i_i64[0] = qword_140C54120;
  v2[2].m128i_i64[1] = qword_140C54120 + 0x7FFFFFFFFFLL;
  v2[0].m128i_i32[0] = 67584;
  v2[9].m128i_i64[1] = (__int64)sub_140B1D770;
  sub_14030CF90(v2);
  return v1;
}
