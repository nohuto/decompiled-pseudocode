/*
 * XREFs of acosf @ 0x18004A834
 * Callers:
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800AFDC8 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B0148 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800B0B58 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800B0DAC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C877C (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl acosf(float X)
{
  return __imp_acosf(X);
}
