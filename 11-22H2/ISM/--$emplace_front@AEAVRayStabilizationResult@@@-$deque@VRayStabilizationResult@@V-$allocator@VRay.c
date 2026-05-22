/*
 * XREFs of ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA?A_TAEAVRayStabilizationResult@@@Z @ 0x1800D7BFC
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800D8FF4 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800D9228 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<RayStabilizationResult>::_Growmap();
  v4 = a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = v7 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
    *(_QWORD *)(a1[1] + 8 * v8) = operator new(0x64uLL);
  v9 = *(_QWORD *)(a1[1] + 8 * v8);
  *(_OWORD *)v9 = *(_OWORD *)a2;
  *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v9 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v9 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(v9 + 96) = *(_DWORD *)(a2 + 96);
  a1[3] = v7;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v7 & (a1[2] - 1LL)));
}
