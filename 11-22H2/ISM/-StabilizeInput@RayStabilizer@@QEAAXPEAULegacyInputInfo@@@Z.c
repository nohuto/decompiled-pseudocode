/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800D8FF4
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800D7620 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA?A_TAEAVRayStabilizationResult@@@Z @ 0x1800D7BFC (--$emplace_front@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allocator@VRay.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800D8158 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800D848C (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800D882C (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?resize@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAX_K@Z @ 0x1800D9400 (-resize@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@QEAAX.c)
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x1800D97A0 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 */

void __fastcall RayStabilizer::StabilizeInput(__m128 *this, struct LegacyInputInfo *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v6; // xmm1_8
  __int64 StabilizedRay; // rax
  _BYTE v8[32]; // [rsp+20h] [rbp-A8h] BYREF
  int v9; // [rsp+40h] [rbp-88h] BYREF
  __int128 v10; // [rsp+44h] [rbp-84h]
  __int64 v11; // [rsp+54h] [rbp-74h]

  v2 = this[2].m128_u64[0] == 0;
  v4 = *(_OWORD *)((char *)a2 + 120);
  v9 = 1;
  v6 = *((_QWORD *)a2 + 17);
  v10 = v4;
  v11 = v6;
  if ( !v2 )
  {
    if ( (this[2].m128_i8[12] & 1) != 0 )
      RayStabilizer::PerformLowPassFilterStabilization((RayStabilizer *)this, (struct RayStabilizationResult *)&v9);
    if ( (this[2].m128_i8[12] & 2) != 0 )
      RayStabilizer::PerformDropOffStabilization(this, (struct RayStabilizationResult *)&v9);
    if ( (this[2].m128_i8[12] & 4) != 0 )
      RayStabilizer::PerformDynamicExponential((RayStabilizer *)this, (struct RayStabilizationResult *)&v9);
  }
  std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(this, (__int64)&v9);
  if ( this[2].m128_u64[0] > this[2].m128_u32[2] )
    std::deque<RayStabilizationResult>::resize(this);
  StabilizedRay = RayStabilizationResult::GetStabilizedRay(&v9, v8);
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)StabilizedRay;
  *((_QWORD *)a2 + 17) = *(_QWORD *)(StabilizedRay + 16);
}
