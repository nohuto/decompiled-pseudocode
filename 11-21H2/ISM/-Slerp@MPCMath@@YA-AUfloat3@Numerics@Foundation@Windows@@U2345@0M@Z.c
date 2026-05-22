/*
 * XREFs of ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800B0B58
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B0148 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     acosf @ 0x18004A834 (acosf.c)
 *     cosf @ 0x18004A864 (cosf.c)
 *     _o_sinf_0 @ 0x18004A8AC (_o_sinf_0.c)
 */

float *__fastcall MPCMath::Slerp(float *a1, float *a2, float *a3, float a4)
{
  float v5; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm10_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float *result; // rax
  float v18; // xmm8_4
  float v19; // xmm1_4
  float v20; // xmm0_4

  v5 = FLOAT_1_0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = (float)((float)(*a3 * *a2) + (float)(v8 * a2[1])) + (float)(v9 * a2[2]);
  if ( v10 <= 1.0 )
  {
    v5 = FLOAT_N1_0;
    if ( v10 >= -1.0 )
      v5 = (float)((float)(*a3 * *a2) + (float)(a3[1] * a2[1])) + (float)(a3[2] * a2[2]);
  }
  v11 = acosf(v5) * a4;
  v12 = v7 - (float)(*a2 * v5);
  v13 = v8 - (float)(a2[1] * v5);
  v14 = v9 - (float)(a2[2] * v5);
  v15 = o_sinf_0(v11);
  v16 = cosf(v11);
  result = a1;
  v18 = (float)(v12 * v15) + (float)(v16 * *a2);
  v19 = v16 * a2[1];
  v20 = v16 * a2[2];
  *a1 = v18;
  a1[1] = (float)(v13 * v15) + v19;
  a1[2] = (float)(v14 * v15) + v20;
  return result;
}
