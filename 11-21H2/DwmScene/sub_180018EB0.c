/*
 * XREFs of sub_180018EB0 @ 0x180018EB0
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043510 @ 0x180043510 (sub_180043510.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_18006642C @ 0x18006642C (sub_18006642C.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__m128 *__fastcall sub_180018EB0(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  __m128 v6; // xmm10
  __m128 v7; // xmm9
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm6
  __m128 v11; // xmm1

  result = a1;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a3));
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 255), v10), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v8)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v9), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *a3)));
  a1[1] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v8)),
            v11);
  a1[2] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v8)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7)));
  a1[3] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v8)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v7)));
  return result;
}
