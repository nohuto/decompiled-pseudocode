/*
 * XREFs of sub_18003C588 @ 0x18003C588
 * Callers:
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 * Callees:
 *     sub_18003DEE0 @ 0x18003DEE0 (sub_18003DEE0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     copysignf @ 0x1800E3954 (copysignf.c)
 */

float *__fastcall sub_18003C588(__int64 a1, float *a2)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  float v7; // xmm8_4
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  float v11; // xmm7_4
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  float v15; // xmm0_4
  float *result; // rax
  __int64 Sign; // [rsp+20h] [rbp-60h]
  float v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-38h]

  sub_18003E330(a1);
  Sign = *(_QWORD *)(a1 + 172);
  v18 = *(float *)(a1 + 180);
  v19 = 1065353216LL;
  v20 = 0;
  sub_18003DEE0(a1, &v21, &v19);
  v4 = _mm_movelh_ps((__m128)(unsigned __int64)v21, (__m128)v22);
  v5 = _mm_mul_ps(v4, v4);
  v22 = 0;
  v6 = _mm_shuffle_ps(v5, v5, 102);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v21 = 0x3F80000000000000LL;
  LODWORD(v7) = _mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0)).m128_u32[0];
  sub_18003DEE0(a1, &v19, &v21);
  v22 = 1065353216;
  v8 = _mm_movelh_ps((__m128)(unsigned __int64)v19, (__m128)v20);
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 102);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v21 = 0LL;
  LODWORD(v11) = _mm_sqrt_ps(_mm_shuffle_ps(v9, v9, 0)).m128_u32[0];
  sub_18003DEE0(a1, &v19, &v21);
  v12 = _mm_movelh_ps((__m128)(unsigned __int64)v19, (__m128)v20);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 102);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  *a2 = copysignf(v7, *(float *)&Sign);
  a2[1] = copysignf(v11, *((float *)&Sign + 1));
  v15 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)).m128_f32[0], v18);
  result = a2;
  a2[2] = v15;
  return result;
}
