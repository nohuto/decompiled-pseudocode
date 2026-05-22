/*
 * XREFs of ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800CA7E8
 * Callers:
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x1800C9574 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800C99D4 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800CFDA0 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EC5C0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F4CD0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F6390 (-PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::transform_normal(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  result = a1;
  v4 = a2[1];
  v5 = a2[2];
  v6 = v5 * a3[10];
  v7 = (float)(*a2 * a3[2]) + (float)(v4 * a3[6]);
  v8 = v5 * a3[9];
  v9 = (float)(*a2 * a3[1]) + (float)(v4 * a3[5]);
  *a1 = (float)((float)(v4 * a3[4]) + (float)(*a2 * *a3)) + (float)(a2[2] * a3[8]);
  a1[2] = v7 + v6;
  a1[1] = v9 + v8;
  return result;
}
