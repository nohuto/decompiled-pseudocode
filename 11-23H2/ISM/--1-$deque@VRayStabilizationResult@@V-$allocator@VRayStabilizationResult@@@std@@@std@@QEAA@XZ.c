/*
 * XREFs of ??1?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA@XZ @ 0x1800BE124
 * Callers:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C5548 (--1MPCInputProviderBase@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800C05EC (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>(void **a1)
{
  void *v2; // rcx

  std::deque<RayStabilizationResult>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
