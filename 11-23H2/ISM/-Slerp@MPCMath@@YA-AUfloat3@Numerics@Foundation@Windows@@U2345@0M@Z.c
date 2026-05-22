/*
 * XREFs of ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800C9B50
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C913C (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     acosf @ 0x1800565A4 (acosf.c)
 *     cosf @ 0x1800565D4 (cosf.c)
 *     _o_sinf_0 @ 0x18005661C (_o_sinf_0.c)
 */

float *__fastcall MPCMath::Slerp(float *a1, float *a2, float *a3, float a4)
{
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float *result; // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm1_4

  v6 = FLOAT_1_0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = (float)((float)(*a3 * *a2) + (float)(v8 * a2[1])) + (float)(v9 * a2[2]);
  if ( v10 <= 1.0 )
  {
    v6 = FLOAT_N1_0;
    if ( v10 >= -1.0 )
      v6 = (float)((float)(*a3 * *a2) + (float)(a3[1] * a2[1])) + (float)(a3[2] * a2[2]);
  }
  v11 = acosf(v6) * a4;
  v12 = o_sinf_0(v11);
  v13 = cosf(v11);
  v14 = v13 * a2[2];
  result = a1;
  v16 = a2[1] * v6;
  v17 = v13 * *a2;
  v18 = v13 * a2[1];
  v19 = (float)((float)(v7 - (float)(*a2 * v6)) * v12) + v17;
  v20 = a2[2] * v6;
  *a1 = v19;
  a1[1] = (float)((float)(v8 - v16) * v12) + v18;
  a1[2] = (float)((float)(v9 - v20) * v12) + v14;
  return result;
}
