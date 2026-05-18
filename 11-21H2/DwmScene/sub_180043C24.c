/*
 * XREFs of sub_180043C24 @ 0x180043C24
 * Callers:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_180043740 @ 0x180043740 (sub_180043740.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180043C24(double a1, double a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm6
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm10
  __m128 v8; // xmm9
  __m128 v9; // xmm11
  __m128 v10; // xmm7
  __m128 v11; // xmm0
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm5
  __m128 v17; // xmm7
  __m128 v18; // xmm4
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  __m128 v23; // xmm2

  v3 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0);
  v4 = *(__m128 *)&a1;
  v5 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 170);
  v6 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 85);
  v7 = _mm_cmple_ps(v5, (__m128)xmmword_1801284F0);
  v8 = _mm_cmple_ps(_mm_add_ps(v6, v3), (__m128)xmmword_1801284F0);
  v9 = _mm_cmple_ps(_mm_sub_ps(v6, v3), (__m128)xmmword_1801284F0);
  v10 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps((__m128)xmmword_18012A4E0, v3), (__m128)xmmword_1801284E0),
            _mm_mul_ps((__m128)xmmword_18012A4D0, v5)),
          _mm_mul_ps((__m128)xmmword_18012A4F0, v6));
  v11 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a3, 64);
  v12 = _mm_add_ps(_mm_shuffle_ps(v4, *(__m128 *)&a2, 105), _mm_shuffle_ps(v11, v11, 120));
  v13 = _mm_shuffle_ps(*(__m128 *)&a2, v4, 106);
  v14 = _mm_shuffle_ps(v10, v12, 4);
  v15 = _mm_mul_ps(
          _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a2, 1), _mm_shuffle_ps(v13, v13, 120)),
          (__m128)xmmword_18012A4F0);
  v16 = _mm_shuffle_ps(v12, v15, 73);
  v17 = _mm_shuffle_ps(v10, v15, 46);
  v18 = _mm_or_ps(
          _mm_andnot_ps(
            v7,
            _mm_or_ps(_mm_andnot_ps(v8, _mm_shuffle_ps(v16, v17, 110)), _mm_and_ps(_mm_shuffle_ps(v16, v17, 132), v8))),
          _mm_and_ps(
            _mm_or_ps(_mm_andnot_ps(v9, _mm_shuffle_ps(v14, v16, 214)), _mm_and_ps(_mm_shuffle_ps(v14, v16, 136), v9)),
            v7));
  v19 = _mm_mul_ps(v18, v18);
  v20 = _mm_shuffle_ps(v19, v19, 238);
  v21 = _mm_add_ps(v19, v20);
  v22 = _mm_shuffle_ps(v21, v21, 64);
  v23 = _mm_add_ps(v22, _mm_shuffle_ps(v20, v22, 240));
  return _mm_div_ps(v18, _mm_sqrt_ps(_mm_shuffle_ps(v23, v23, 170)));
}
