/*
 * XREFs of ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800B0DAC
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800AFE14 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B0148 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800B07BC (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 * Callees:
 *     acosf @ 0x18004A834 (acosf.c)
 *     _o_asinf_0 @ 0x18004A840 (_o_asinf_0.c)
 */

char __fastcall RayStabilizer::TransformRay(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // xmm2_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  unsigned __int64 v7; // xmm6_8
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  float v12; // xmm0_4

  v2 = a1[5];
  if ( COERCE_FLOAT(v2 & _xmm) >= 0.99000001 )
    return 0;
  v5 = a1[1];
  v6 = a1[2];
  *(_DWORD *)a2 = *a1;
  *(_DWORD *)(a2 + 4) = v5;
  *(_DWORD *)(a2 + 8) = v6;
  v7 = _mm_unpacklo_ps((__m128)(unsigned int)a1[3], (__m128)(unsigned int)a1[4]).m128_u64[0];
  *(_QWORD *)(a2 + 12) = v7;
  *(_DWORD *)(a2 + 20) = v2;
  *(float *)(a2 + 24) = (float)(o_asinf_0(*(float *)(a2 + 16)) * 180.0) / 3.142;
  v8 = _mm_movelh_ps((__m128)(unsigned int)v7, (__m128)v2);
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 102);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_div_ps(v8, _mm_sqrt_ps(_mm_shuffle_ps(v9, v9, 0)));
  v12 = (float)(acosf(
                  (float)((float)(v11.m128_f32[1] * -0.0) + (float)(v11.m128_f32[0] * -0.0))
                - _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
              * 180.0)
      / 3.142;
  *(float *)(a2 + 28) = v12;
  if ( v11.m128_f32[0] > 0.0 )
    *(float *)(a2 + 28) = v12 * -1.0;
  return 1;
}
