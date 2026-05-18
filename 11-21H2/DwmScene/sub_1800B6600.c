/*
 * XREFs of sub_1800B6600 @ 0x1800B6600
 * Callers:
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_180059610 @ 0x180059610 (sub_180059610.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B6600(__m128 *a1, __m128 *a2)
{
  a1[3] = _mm_add_ps(a1[3], *a2);
  a1[4] = _mm_add_ps(a1[4], *a2);
  a1[5] = _mm_add_ps(*a2, a1[5]);
}
