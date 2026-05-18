/*
 * XREFs of sub_1800A3DDC @ 0x1800A3DDC
 * Callers:
 *     sub_18001BB88 @ 0x18001BB88 (sub_18001BB88.c)
 *     sub_180051C0C @ 0x180051C0C (sub_180051C0C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800A3DDC(__m128 *a1, __m128 *a2)
{
  a1[3] = _mm_add_ps(a1[3], *a2);
  a1[4] = _mm_add_ps(a1[4], *a2);
  a1[5] = _mm_add_ps(*a2, a1[5]);
}
