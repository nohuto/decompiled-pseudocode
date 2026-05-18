/*
 * XREFs of sub_180041B64 @ 0x180041B64
 * Callers:
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 * Callees:
 *     sub_180043740 @ 0x180043740 (sub_180043740.c)
 */

char __fastcall sub_180041B64(unsigned int *a1, unsigned __int64 *a2, __m128 *a3, __int64 a4)
{
  unsigned int v5; // xmm4_4
  __m128 v8; // xmm6
  __m128 v9; // xmm8
  __m128 v10; // xmm11
  __m128 v11; // xmm12
  __m128 v12; // xmm13
  __m128 v13; // xmm15
  __m128 v14; // xmm15
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  unsigned __int32 v20; // xmm7_4
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  float v23; // xmm1_4
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  char result; // al
  __m128 v27; // xmm1
  __m128 v28; // xmm3
  __m128 v29; // xmm4
  __m128 v30; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v31; // [rsp+58h] [rbp-B0h]
  __m128 v32; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v33; // [rsp+78h] [rbp-90h] BYREF

  v5 = a1[6];
  v8 = 0LL;
  v9 = (__m128)a1[4];
  v10 = (__m128)a1[8];
  v11 = (__m128)a1[9];
  v12 = (__m128)a1[5];
  v13 = 0LL;
  v13.m128_u64[0] = _mm_unpacklo_ps((__m128)*a1, (__m128)a1[1]).m128_u64[0];
  v14 = _mm_movelh_ps(v13, (__m128)a1[2]);
  v15 = _mm_mul_ps(v14, v14);
  v30.m128_i32[2] = a1[10];
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v31 = _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0));
  v8.m128_u64[0] = _mm_unpacklo_ps(v9, v12).m128_u64[0];
  v32 = _mm_movelh_ps(v8, (__m128)v5);
  v17 = _mm_mul_ps(v32, v32);
  v18 = 0LL;
  v19 = _mm_shuffle_ps(v17, v17, 102);
  v17.m128_f32[0] = (float)(v17.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
  v18.m128_u64[0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  v33 = _mm_movelh_ps(v18, (__m128)v30.m128_u32[2]);
  v20 = _mm_sqrt_ps(_mm_shuffle_ps(v17, v17, 0)).m128_u32[0];
  v21 = _mm_mul_ps(v33, v33);
  v22 = _mm_shuffle_ps(v21, v21, 102);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
  v23 = _mm_sqrt_ps(_mm_shuffle_ps(v21, v21, 0)).m128_f32[0];
  *(unsigned __int64 *)((char *)v31.m128_u64 + 4) = __PAIR64__(LODWORD(v23), v20);
  if ( v23 != 0.0 )
  {
    v24 = (__m128)0x3F800000u;
    v24.m128_f32[0] = 1.0 / v23;
    v30.m128_u64[0] = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v33).m128_u64[0];
  }
  if ( !(unsigned __int8)sub_180043740(&v33, &v32, &v30) )
    return 0;
  v25 = v33;
  result = 1;
  v27 = v30;
  v28 = (__m128)v31.m128_u64[0];
  *a2 = v33.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  *a3 = v32;
  *(_QWORD *)a4 = v27.m128_u64[0];
  *(_DWORD *)(a4 + 8) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
  v29 = _mm_mul_ps(
          _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)),
          _mm_movelh_ps(v28, (__m128)v31.m128_u32[2]));
  *a2 = v29.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
  return result;
}
