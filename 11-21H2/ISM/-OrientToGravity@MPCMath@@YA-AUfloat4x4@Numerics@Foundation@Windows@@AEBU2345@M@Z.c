/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801C5DA8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C51E0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8FA0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C9AE8 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18004A8C4 (_o_sqrtf_0.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1801C7364 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

__int128 *__fastcall MPCMath::OrientToGravity(__int128 *a1, float *a2, float a3)
{
  __m128 v6; // xmm6
  __int64 v7; // rcx
  float v8; // xmm5_4
  __m128 v9; // xmm4
  __m128 v10; // xmm4
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm4
  float v14; // xmm1_4
  __m128 v15; // xmm2
  float v16; // xmm0_4
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  double v21; // xmm0_8
  __m128 v22; // xmm4
  __m128 v23; // xmm4
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __m128 v26; // xmm4
  float v27; // xmm8_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  __m128 v34; // xmm3
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __m128 v38; // xmm3
  __int128 v39; // xmm3
  __int128 v40; // xmm1
  __int128 v41; // xmm3
  __int128 v42; // xmm0
  __int128 v43; // xmm2
  __int128 *result; // rax
  float v45; // [rsp+28h] [rbp-49h]
  float v46; // [rsp+40h] [rbp-31h]
  _DWORD v47[6]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v48; // [rsp+60h] [rbp-11h]
  float v49; // [rsp+70h] [rbp-1h]
  _BYTE v50[20]; // [rsp+74h] [rbp+3h]

  *a1 = *(_OWORD *)a2;
  a1[1] = *((_OWORD *)a2 + 1);
  a1[2] = *((_OWORD *)a2 + 2);
  a1[3] = *((_OWORD *)a2 + 3);
  v6 = (__m128)*((unsigned int *)a2 + 9);
  v46 = a2[10];
  v8 = o_sqrtf_0((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(a2[8] * a2[8])) + (float)(v46 * v46));
  v9 = 0LL;
  v9.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 8), v6).m128_u64[0];
  v10 = _mm_movelh_ps(v9, (__m128)LODWORD(v46));
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = (float)(v11.m128_f32[0] + v12.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v13 = _mm_div_ps(v10, _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)));
  v45 = v13.m128_f32[0];
  v15 = (__m128)v13.m128_u32[0];
  v14 = v13.m128_f32[1];
  v15.m128_f32[0] = v13.m128_f32[0] * 0.0;
  v16 = v13.m128_f32[1];
  v17 = _mm_shuffle_ps(v13, v13, 170);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v16 + v15.m128_f32[0]) + (float)(v17.m128_f32[0] * 0.0)) & _xmm) <= a3 )
  {
    v15.m128_f32[0] = v15.m128_f32[0] - (float)(v17.m128_f32[0] * 0.0);
    v33 = v14 * 0.0;
    v34 = 0LL;
    v17.m128_f32[0] = v17.m128_f32[0] - v33;
    v34.m128_u64[0] = _mm_unpacklo_ps(v17, v15).m128_u64[0];
    v35 = _mm_movelh_ps(v34, (__m128)COERCE_UNSIGNED_INT(v33 - v45));
    v36 = _mm_mul_ps(v35, v35);
    v37 = _mm_shuffle_ps(v36, v36, 102);
    v36.m128_f32[0] = (float)(v36.m128_f32[0] + v37.m128_f32[0]) + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
    v38 = _mm_div_ps(v35, _mm_sqrt_ps(_mm_shuffle_ps(v36, v36, 0)));
    v30 = v38.m128_f32[0];
    v32 = v38.m128_f32[1];
    v31 = _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
    v27 = (float)(v38.m128_f32[1] * 0.0) - v31;
    v28 = (float)(v31 * 0.0) - (float)(v38.m128_f32[0] * 0.0);
    v29 = v30 - (float)(v38.m128_f32[1] * 0.0);
  }
  else
  {
    v18 = (__m128)*((unsigned int *)a2 + 1);
    v19 = (__m128)*((unsigned int *)a2 + 2);
    v18.m128_f32[0] = v18.m128_f32[0] * 0.0;
    v20 = v18;
    v20.m128_f32[0] = v18.m128_f32[0] - v19.m128_f32[0];
    v19.m128_f32[0] = (float)(v19.m128_f32[0] * 0.0) - (float)(*a2 * 0.0);
    v21 = *(double *)_mm_unpacklo_ps(v20, v19).m128_u64;
    v22 = 0LL;
    *(double *)v22.m128_u64 = v21;
    v23 = _mm_movelh_ps(v22, (__m128)COERCE_UNSIGNED_INT(*a2 - v18.m128_f32[0]));
    v24 = _mm_mul_ps(v23, v23);
    v25 = _mm_shuffle_ps(v24, v24, 102);
    v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
    v26 = _mm_div_ps(v23, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)));
    v27 = v26.m128_f32[0];
    v28 = v26.m128_f32[1];
    v24.m128_i32[0] = v26.m128_i32[0];
    v29 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
    v30 = v29 - (float)(v26.m128_f32[1] * 0.0);
    v31 = (float)(v26.m128_f32[1] * 0.0) - v27;
    v32 = (float)(v24.m128_f32[0] * 0.0) - (float)(v29 * 0.0);
  }
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 6) = 0;
  v48 = 0LL;
  *((_DWORD *)a1 + 5) = 1065353216;
  *(_OWORD *)v50 = 0LL;
  *((float *)a1 + 1) = v32;
  *((float *)a1 + 9) = v28;
  *(_OWORD *)&v47[1] = 0LL;
  *(float *)&v50[16] = FLOAT_1_0;
  v39 = *(_OWORD *)&v50[4];
  *((float *)a1 + 10) = v29;
  *(float *)a1 = v30;
  *((float *)a1 + 2) = v31;
  *((float *)a1 + 8) = v27;
  *(float *)v47 = v8;
  *(float *)&v47[5] = v8;
  v49 = v8;
  v40 = a1[1];
  *(_OWORD *)&v50[4] = v39;
  v41 = a1[3];
  v42 = *a1;
  v43 = a1[2];
  *(double *)&v42 = DirectX::XMMatrixMultiply(v7, v47);
  *a1 = v42;
  result = a1;
  a1[1] = v40;
  a1[2] = v43;
  a1[3] = v41;
  *((float *)a1 + 12) = a2[12];
  *((float *)a1 + 13) = a2[13];
  *((float *)a1 + 14) = a2[14];
  return result;
}
