/*
 * XREFs of ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800A88EC
 * Callers:
 *     ??1?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA@XZ @ 0x1800A6538 (--1-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@QEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800B0B2C (-Reset@RayStabilizer@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<RayStabilizationResult>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x64uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
