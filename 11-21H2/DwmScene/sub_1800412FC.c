/*
 * XREFs of sub_1800412FC @ 0x1800412FC
 * Callers:
 *     sub_1800B7118 @ 0x1800B7118 (sub_1800B7118.c)
 * Callees:
 *     sub_180043184 @ 0x180043184 (sub_180043184.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

float *__fastcall sub_1800412FC(__int64 a1, float *a2)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  float v7; // xmm0_4
  float v8; // xmm7_4
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // xmm0_4
  float v13; // xmm6_4
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm0_4
  float *result; // rax
  __int64 Sign; // [rsp+20h] [rbp-50h]
  float v20; // [rsp+28h] [rbp-48h]
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-28h]

  sub_180043668(a1);
  Sign = *(_QWORD *)(a1 + 172);
  v20 = *(float *)(a1 + 180);
  v21 = 1065353216LL;
  v22 = 0;
  sub_180043184(a1, &v23, &v21);
  v4 = _mm_movelh_ps((__m128)(unsigned __int64)v23, (__m128)v24);
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v5, v5, 102);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v7 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0)).m128_f32[0], *(float *)&Sign);
  v23 = 0x3F80000000000000LL;
  v8 = v7;
  v24 = 0;
  sub_180043184(a1, &v21, &v23);
  v9 = _mm_movelh_ps((__m128)(unsigned __int64)v21, (__m128)v22);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v12 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)).m128_f32[0], *((float *)&Sign + 1));
  v23 = 0LL;
  v13 = v12;
  v24 = 1065353216;
  sub_180043184(a1, &v21, &v23);
  v14 = _mm_movelh_ps((__m128)(unsigned __int64)v21, (__m128)v22);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v17 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)).m128_f32[0], v20);
  *a2 = v8;
  result = a2;
  a2[2] = v17;
  a2[1] = v13;
  return result;
}
