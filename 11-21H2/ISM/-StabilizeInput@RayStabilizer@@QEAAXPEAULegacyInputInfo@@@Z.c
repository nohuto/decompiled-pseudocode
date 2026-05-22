/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B0CA8
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800AF2E0 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x1800AF8B8 (--$emplace_front@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allocator@VRay.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800AFE14 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B0148 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B04E8 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x1800B13B4 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 */

void __fastcall RayStabilizer::StabilizeInput(__m128 *this, struct LegacyInputInfo *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v6; // xmm1_8
  __int32 v7; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 StabilizedRay; // rax
  char v12[32]; // [rsp+20h] [rbp-A8h] BYREF
  int v13; // [rsp+40h] [rbp-88h] BYREF
  __int128 v14; // [rsp+44h] [rbp-84h]
  __int64 v15; // [rsp+54h] [rbp-74h]

  v2 = this[2].m128_u64[0] == 0;
  v4 = *(_OWORD *)((char *)a2 + 120);
  v13 = 1;
  v6 = *((_QWORD *)a2 + 17);
  v14 = v4;
  v15 = v6;
  if ( !v2 )
  {
    v7 = this[2].m128_i32[3];
    if ( (v7 & 1) != 0 )
    {
      RayStabilizer::PerformLowPassFilterStabilization((RayStabilizer *)this, (struct RayStabilizationResult *)&v13);
      v7 = this[2].m128_i32[3];
    }
    if ( (v7 & 2) != 0 )
    {
      RayStabilizer::PerformDropOffStabilization(this, (struct RayStabilizationResult *)&v13);
      v7 = this[2].m128_i32[3];
    }
    if ( (v7 & 4) != 0 )
      RayStabilizer::PerformDynamicExponential((RayStabilizer *)this, (struct RayStabilizationResult *)&v13);
  }
  std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(this, (__int64)&v13);
  v8 = this[2].m128_u32[2];
  v9 = this[2].m128_u64[0];
  if ( v9 > v8 )
  {
    do
    {
      v10 = v9 - 1;
      this[2].m128_u64[0] = v9 - 1;
      v9 = v10;
      if ( !v10 )
        this[1].m128_u64[1] = 0LL;
    }
    while ( v8 < v10 );
  }
  StabilizedRay = RayStabilizationResult::GetStabilizedRay(&v13, v12);
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)StabilizedRay;
  *((_QWORD *)a2 + 17) = *(_QWORD *)(StabilizedRay + 16);
}
