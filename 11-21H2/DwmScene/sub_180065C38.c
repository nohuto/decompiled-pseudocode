/*
 * XREFs of sub_180065C38 @ 0x180065C38
 * Callers:
 *     sub_180065B74 @ 0x180065B74 (sub_180065B74.c)
 * Callees:
 *     sub_180063E30 @ 0x180063E30 (sub_180063E30.c)
 */

__m128 *__fastcall sub_180065C38(__int64 a1, __m128 *a2, __m128 *a3)
{
  __m128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  sub_180063E30(a1, a2, &v5);
  return a2;
}
