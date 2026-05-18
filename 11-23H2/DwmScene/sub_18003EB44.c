/*
 * XREFs of sub_18003EB44 @ 0x18003EB44
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18003E3B0 @ 0x18003E3B0 (sub_18003E3B0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003EB44(double a1, double a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm6
  __m128 v5; // xmm5
  __m128 v6; // xmm10
  __m128 v7; // xmm3
  __m128 v8; // xmm11
  __m128 v9; // xmm10
  __m128 v10; // xmm8
  __m128 v11; // xmm12
  __m128 v12; // xmm11
  __m128 v13; // xmm0
  __m128 v14; // xmm5
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  __m128 v17; // xmm9
  __m128 v18; // xmm5
  __m128 v19; // xmm11
  __m128 v20; // xmm4
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm2
  __m128 v25; // xmm2

  v3 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 85);
  v4 = *(__m128 *)&a1;
  v5 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 105);
  v6 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 170);
  v7 = _mm_mul_ps(v6, (__m128)xmmword_180108530);
  v8 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0);
  v9 = _mm_cmple_ps(v6, (__m128)xmmword_180106550);
  v10 = _mm_cmple_ps(_mm_add_ps(v3, v8), (__m128)xmmword_180106550);
  v11 = _mm_cmple_ps(_mm_sub_ps(v3, v8), (__m128)xmmword_180106550);
  v12 = _mm_add_ps(
          _mm_add_ps(_mm_add_ps(_mm_mul_ps(v8, (__m128)xmmword_180108540), (__m128)xmmword_180106540), v7),
          _mm_mul_ps((__m128)xmmword_180108550, v3));
  v13 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a3, 64);
  v14 = _mm_add_ps(v5, _mm_shuffle_ps(v13, v13, 120));
  v15 = _mm_shuffle_ps(*(__m128 *)&a2, v4, 106);
  v16 = _mm_shuffle_ps(v12, v14, 4);
  v17 = _mm_mul_ps(
          _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a2, 1), _mm_shuffle_ps(v15, v15, 120)),
          (__m128)xmmword_180108550);
  v18 = _mm_shuffle_ps(v14, v17, 73);
  v19 = _mm_shuffle_ps(v12, v17, 46);
  v20 = _mm_or_ps(
          _mm_andnot_ps(
            v9,
            _mm_or_ps(_mm_andnot_ps(v10, _mm_shuffle_ps(v18, v19, 110)), _mm_and_ps(_mm_shuffle_ps(v18, v19, 132), v10))),
          _mm_and_ps(
            _mm_or_ps(_mm_andnot_ps(v11, _mm_shuffle_ps(v16, v18, 214)), _mm_and_ps(_mm_shuffle_ps(v16, v18, 136), v11)),
            v9));
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 238);
  v23 = _mm_add_ps(v21, v22);
  v24 = _mm_shuffle_ps(v23, v23, 64);
  v25 = _mm_add_ps(v24, _mm_shuffle_ps(v22, v24, 240));
  return _mm_div_ps(v20, _mm_sqrt_ps(_mm_shuffle_ps(v25, v25, 170)));
}
