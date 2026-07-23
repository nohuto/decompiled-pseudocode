/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x1402C1E8C
 * Callers:
 *     PoCopyDeepIdleMask @ 0x14028FEEC (PoCopyDeepIdleMask.c)
 *     PoAllProcessorsDeepIdle @ 0x1402C1DB0 (PoAllProcessorsDeepIdle.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140306DE8 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403B4440 (KeQueryNodeActiveProcessorCount.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14056BD10 (KiConfigureHeteroProcessorsTarget.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140570DE8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     PpmGetIdleConstrainedMask @ 0x1405846F0 (PpmGetIdleConstrainedMask.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PpmEventTraceHeteroSets @ 0x14082D774 (PpmEventTraceHeteroSets.c)
 *     KiSynchNumaCounterSetCallback @ 0x1409741A0 (KiSynchNumaCounterSetCallback.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B45B8C (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B4C770 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 2147483674LL;
  _BitScanForward((unsigned int *)&v4, v2);
  *(_DWORD *)(a1 + 8) = v2 & ~(1 << v4);
  result = 0LL;
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24);
  return result;
}
