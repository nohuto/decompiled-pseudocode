/*
 * XREFs of ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x1800AF8B8
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B0CA8 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800B0EF4 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<RayStabilizationResult>::_Growmap(a1);
    v4 = a1[2];
  }
  v5 = v4 - 1;
  v6 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v7 = a1[3];
  if ( v6 )
    v7 = v4;
  v8 = a1[1];
  v9 = v7 - 1;
  v10 = v9 & v5;
  if ( !*(_QWORD *)(v8 + 8 * v10) )
  {
    *(_QWORD *)(a1[1] + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x64uLL);
    v8 = a1[1];
  }
  v11 = *(_QWORD *)(v8 + 8 * v10);
  *(_OWORD *)v11 = *(_OWORD *)a2;
  *(_OWORD *)(v11 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v11 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v11 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v11 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v11 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(v11 + 96) = *(_DWORD *)(a2 + 96);
  a1[3] = v9;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v9 & (a1[2] - 1LL)));
}
