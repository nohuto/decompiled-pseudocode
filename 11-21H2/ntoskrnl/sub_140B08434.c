/*
 * XREFs of sub_140B08434 @ 0x140B08434
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B08434(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = sub_14026DFC0(1);
  v6[0].m128i_i32[0] = 2055;
  v6[2].m128i_i64[0] = a1;
  v6[9].m128i_i64[1] = (__int64)sub_140B197C0;
  v6[2].m128i_i64[1] = a2;
  v6[1].m128i_i64[1] = (__int64)v4;
  v6[0].m128i_i8[7] = sub_1402CF4F0((__int64)v4);
  sub_14030CF90(v6);
  return sub_1402B0CE0((__int64)v4, v6[0].m128i_u8[7]);
}
