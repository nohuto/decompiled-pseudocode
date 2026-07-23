/*
 * XREFs of sub_140A4FE40 @ 0x140A4FE40
 * Callers:
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

struct _KTHREAD *__fastcall sub_140A4FE40(__int64 a1)
{
  char *v2; // rax
  struct _KTHREAD *result; // rax
  __m128i v4[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[0].m128i_i32[0] = 2817;
  v4[9].m128i_i64[1] = (__int64)sub_140A4FFC0;
  v2 = sub_14026DFC0(3);
  v4[2] = _mm_load_si128((const __m128i *)&xmmword_140024EF0);
  v4[1].m128i_i64[1] = (__int64)v2;
  v4[0].m128i_i8[7] = 17;
  v4[10].m128i_i64[1] = a1;
  result = (struct _KTHREAD *)sub_14030CF90(v4);
  if ( a1 )
    return sub_1403AD034(0);
  return result;
}
