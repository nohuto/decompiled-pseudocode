/*
 * XREFs of sub_180063E30 @ 0x180063E30
 * Callers:
 *     sub_180065C38 @ 0x180065C38 (sub_180065C38.c)
 * Callees:
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 */

__m128 *__fastcall sub_180063E30(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v5; // rax
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 *result; // rax

  v5 = sub_180063D14(a1, 2, 1);
  v6 = *a3;
  v7 = _mm_add_ps(
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 255), *(__m128 *)(v5 + 48)),
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), *(__m128 *)(v5 + 32)));
  v8 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), *(__m128 *)(v5 + 16));
  v9 = *(__m128 *)v5;
  result = a2;
  *a2 = _mm_add_ps(_mm_add_ps(v7, v8), _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v9));
  return result;
}
