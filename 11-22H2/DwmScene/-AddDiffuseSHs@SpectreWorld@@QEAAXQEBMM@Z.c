/*
 * XREFs of ?AddDiffuseSHs@SpectreWorld@@QEAAXQEBMM@Z @ 0x18001BC24
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall SpectreWorld::AddDiffuseSHs(__m128 *this, float *a2, double a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm3
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // [rsp+0h] [rbp-18h]

  v11.m128_f32[0] = *a2;
  v11.m128_f32[2] = a2[18];
  v11.m128_f32[1] = a2[9];
  v11.m128_i32[3] = 1065353216;
  v3 = v11;
  v11.m128_i32[3] = 1065353216;
  v4 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0);
  this[3] = _mm_add_ps(_mm_mul_ps(v4, v3), this[3]);
  v11.m128_f32[0] = a2[1];
  v11.m128_f32[2] = a2[19];
  v11.m128_f32[1] = a2[10];
  v5 = v11;
  v11.m128_i32[3] = 1065353216;
  this[4] = _mm_add_ps(_mm_mul_ps(v4, v5), this[4]);
  v11.m128_f32[0] = a2[2];
  v11.m128_f32[2] = a2[20];
  v11.m128_f32[1] = a2[11];
  v6 = v11;
  v11.m128_i32[3] = 1065353216;
  this[5] = _mm_add_ps(_mm_mul_ps(v4, v6), this[5]);
  v11.m128_f32[0] = a2[3];
  v11.m128_f32[2] = a2[21];
  v11.m128_f32[1] = a2[12];
  v7 = v11;
  v11.m128_i32[3] = 1065353216;
  this[6] = _mm_add_ps(_mm_mul_ps(v4, v7), this[6]);
  v11.m128_f32[0] = a2[4];
  v11.m128_f32[2] = a2[22];
  v11.m128_f32[1] = a2[13];
  v8 = v11;
  v11.m128_i32[3] = 1065353216;
  this[7] = _mm_add_ps(_mm_mul_ps(v4, v8), this[7]);
  v11.m128_f32[0] = a2[5];
  v11.m128_f32[2] = a2[23];
  v11.m128_f32[1] = a2[14];
  this[8] = _mm_add_ps(_mm_mul_ps(v4, v11), this[8]);
  v11.m128_f32[0] = a2[6];
  v11.m128_f32[1] = a2[15];
  v11.m128_i32[3] = 1065353216;
  v11.m128_f32[2] = a2[24];
  v9 = v11;
  v11.m128_i32[3] = 1065353216;
  this[9] = _mm_add_ps(_mm_mul_ps(v4, v9), this[9]);
  v11.m128_f32[0] = a2[7];
  v11.m128_f32[1] = a2[16];
  v11.m128_f32[2] = a2[25];
  v10 = v11;
  v11.m128_i32[3] = 1065353216;
  this[10] = _mm_add_ps(_mm_mul_ps(v4, v10), this[10]);
  v11.m128_f32[0] = a2[8];
  v11.m128_f32[1] = a2[17];
  v11.m128_f32[2] = a2[26];
  this[11] = _mm_add_ps(_mm_mul_ps(v4, v11), this[11]);
}
