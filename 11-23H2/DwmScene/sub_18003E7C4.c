/*
 * XREFs of sub_18003E7C4 @ 0x18003E7C4
 * Callers:
 *     sub_18003E3B0 @ 0x18003E3B0 (sub_18003E3B0.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003E7C4(double a1, double a2, double a3, double a4)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm9
  __m128 v6; // xmm4
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm7
  __m128 v11; // xmm10
  __m128 v12; // xmm7
  __m128 v13; // xmm10

  v4 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 191);
  v5 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 90);
  v6 = _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 1);
  v7 = _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 191);
  v8 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 1);
  v9 = _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 90);
  v10 = _mm_add_ps(
          _mm_sub_ps(
            _mm_mul_ps(
              _mm_sub_ps(_mm_mul_ps(v9, v8), _mm_mul_ps(v5, v6)),
              _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 191)),
            _mm_mul_ps(
              _mm_sub_ps(_mm_mul_ps(v8, v7), _mm_mul_ps(v6, v4)),
              _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 90))),
          _mm_mul_ps(
            _mm_sub_ps(_mm_mul_ps(v5, v7), _mm_mul_ps(v9, v4)),
            _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 1)));
  v11 = _mm_mul_ps(_mm_mul_ps(*(__m128 *)&a1, (__m128)xmmword_180108500), v10);
  v12 = _mm_add_ps(_mm_shuffle_ps(v10, v11, 64), v11);
  v13 = _mm_add_ps(_mm_shuffle_ps(v11, v12, 48), v12);
  return _mm_shuffle_ps(v13, v13, 170);
}
