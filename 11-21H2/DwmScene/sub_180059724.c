/*
 * XREFs of sub_180059724 @ 0x180059724
 * Callers:
 *     sub_180059110 @ 0x180059110 (sub_180059110.c)
 *     sub_180059610 @ 0x180059610 (sub_180059610.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 * Callees:
 *     sub_1800592BC @ 0x1800592BC (sub_1800592BC.c)
 */

void __fastcall sub_180059724(__int64 a1)
{
  __m128 v1; // xmm2
  __int64 v2; // rax
  __int64 v3; // rax
  float v4; // xmm3_4
  float v5; // xmm0_4
  __int64 v6; // rax
  int v7; // xmm4_4
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  float v15[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = _mm_add_ps(_mm_add_ps(*(__m128 *)(a1 + 320), *(__m128 *)(a1 + 304)), *(__m128 *)(a1 + 336));
  *(_DWORD *)(a1 + 400) = v1.m128_i32[0];
  *(_DWORD *)(a1 + 408) = _mm_shuffle_ps(v1, v1, 170).m128_u32[0];
  *(_DWORD *)(a1 + 404) = _mm_shuffle_ps(v1, v1, 85).m128_u32[0];
  *(_DWORD *)(a1 + 412) = _mm_shuffle_ps(v1, v1, 255).m128_u32[0];
  *(__m128 *)(a1 + 400) = _mm_mul_ps((__m128)xmmword_1801BD8B0, *(__m128 *)(a1 + 400));
  *(_OWORD *)v15 = *(_OWORD *)(a1 + 256);
  sub_1800592BC(v15);
  *(_OWORD *)v15 = *(_OWORD *)(v2 + 272);
  v4 = sub_1800592BC(v15);
  *(_OWORD *)v15 = *(_OWORD *)(v3 + 288);
  v5 = sub_1800592BC(v15);
  *(float *)(v6 + 420) = v4;
  *(float *)(v6 + 424) = v5;
  *(_DWORD *)(v6 + 416) = v7;
  v8 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v6 + 416), (__m128)*(unsigned int *)(v6 + 424));
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 153);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_shuffle_ps(v9, v9, 0);
  v12 = _mm_sqrt_ps(v11);
  v13 = _mm_cmpneq_ps(v11, (__m128)xmmword_1801282E0);
  v14 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v8, v12), _mm_cmpneq_ps(v12, (__m128)0LL)), v13),
          _mm_andnot_ps(v13, (__m128)xmmword_180128330));
  *(_QWORD *)(v6 + 416) = v14.m128_u64[0];
  *(_DWORD *)(v6 + 424) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
}
