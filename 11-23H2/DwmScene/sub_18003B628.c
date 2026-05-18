/*
 * XREFs of sub_18003B628 @ 0x18003B628
 * Callers:
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_18003DC28 @ 0x18003DC28 (sub_18003DC28.c)
 *     sub_1800A4FA0 @ 0x1800A4FA0 (sub_1800A4FA0.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_18003B628(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm1

  result = a1;
  v4 = _mm_shuffle_ps(*a2, *a2, 27);
  v5 = _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v4);
  v6 = _mm_shuffle_ps(v4, v4, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 27), _mm_shuffle_ps(*a3, *a3, 170)), (__m128)xmmword_180108510),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v6), (__m128)xmmword_1801084F0)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 255), *a2), _mm_mul_ps(v5, (__m128)xmmword_180108500)));
  return result;
}
