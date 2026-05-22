/*
 * XREFs of ?resize@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAX_K@Z @ 0x1800D9400
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800D8FF4 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800D9228 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

unsigned __int64 __fastcall std::deque<RayStabilizationResult>::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *i; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp

  result = a1[4];
  for ( i = a1 + 3; result < a2; a1[4] = result )
  {
    if ( a1[2] <= result + 1 )
      std::deque<RayStabilizationResult>::_Growmap(a1);
    v6 = a1[2] - 1LL;
    *i &= v6;
    v7 = v6 & (*i + a1[4]);
    if ( !*(_QWORD *)(a1[1] + 8 * v7) )
      *(_QWORD *)(a1[1] + 8 * v7) = operator new(0x64uLL);
    **(_DWORD **)(a1[1] + 8 * v7) = 0;
    result = a1[4] + 1LL;
  }
  while ( a2 < result )
  {
    a1[4] = --result;
    if ( !result )
      *i = 0LL;
  }
  return result;
}
