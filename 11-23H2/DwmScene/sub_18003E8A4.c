/*
 * XREFs of sub_18003E8A4 @ 0x18003E8A4
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003E8A4(double a1, double a2, double a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm5
  __m128 v5; // xmm6
  __m128 v6; // xmm4
  float v7; // xmm3_4
  __m128 v8; // xmm4
  __m128 v9; // xmm5
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm10
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm7
  __m128 v21; // xmm3
  __m128 v22; // xmm9
  __m128 v23; // xmm7
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm5
  __m128 v29; // xmm3
  __m128 v30; // xmm1
  __m128 v31; // xmm1

  v3 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 201);
  v4 = _mm_mul_ps(*(__m128 *)&a2, *(__m128 *)&a2);
  v5 = *(__m128 *)&a2;
  v6 = _mm_shuffle_ps(v4, v4, 153);
  v4.m128_f32[0] = v4.m128_f32[0] + v6.m128_f32[0];
  v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v8 = _mm_sub_ps((__m128)0LL, *(__m128 *)&a1);
  v4.m128_f32[0] = v4.m128_f32[0] + v7;
  v9 = _mm_shuffle_ps(v4, v4, 0);
  v10 = _mm_cmpneq_ps((__m128)xmmword_180106340, v9);
  v11 = _mm_sqrt_ps(v9);
  v12 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v11), _mm_div_ps(v5, v11)), v10),
          _mm_andnot_ps(v10, (__m128)xmmword_180106390));
  v13 = _mm_shuffle_ps(v12, v12, 210);
  v14 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v13, v3), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 210), _mm_shuffle_ps(v3, v3, 201))),
          (__m128)xmmword_180106400);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 153);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v17 = _mm_shuffle_ps(v15, v15, 0);
  v18 = _mm_sqrt_ps(v17);
  v19 = _mm_cmpneq_ps(v17, (__m128)xmmword_180106340);
  v20 = _mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v18), _mm_div_ps(v14, v18));
  v21 = v8;
  v22 = _mm_mul_ps(v8, v12);
  v23 = _mm_or_ps(_mm_and_ps(v20, v19), _mm_andnot_ps(v19, (__m128)xmmword_180106390));
  v24 = _mm_mul_ps(v8, v23);
  v25 = _mm_shuffle_ps(v23, v23, 210);
  v26 = _mm_shuffle_ps(v12, v12, 201);
  v27 = _mm_shuffle_ps(v24, v24, 153);
  v28 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v25, v26), _mm_mul_ps(_mm_shuffle_ps(v25, v25, 210), _mm_shuffle_ps(v26, v26, 201))),
          (__m128)xmmword_180106400);
  v29 = _mm_mul_ps(v21, v28);
  v24.m128_f32[0] = (float)(v24.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v30 = _mm_shuffle_ps(v29, v29, 153);
  v29.m128_f32[0] = (float)(v29.m128_f32[0] + v30.m128_f32[0]) + _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
  v31 = _mm_shuffle_ps(v22, v22, 153);
  v22.m128_f32[0] = (float)(v22.m128_f32[0] + v31.m128_f32[0]) + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
  return _mm_shuffle_ps(
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180106400, _mm_shuffle_ps(v24, v24, 0)),
               _mm_and_ps((__m128)xmmword_180106400, v23)),
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180106400, _mm_shuffle_ps(v29, v29, 0)),
               _mm_and_ps((__m128)xmmword_180106400, v28)),
             68),
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_180106400, _mm_shuffle_ps(v22, v22, 0)),
               _mm_and_ps((__m128)xmmword_180106400, v12)),
             (__m128)xmmword_180106510,
             68),
           136);
}
