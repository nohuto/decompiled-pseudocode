/*
 * XREFs of KeIsEqualAffinityEx @ 0x1402C0160
 * Callers:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiTestNodeAffinity @ 0x1402C008C (KiTestNodeAffinity.c)
 *     PpmParkReportMask @ 0x14035AF00 (PpmParkReportMask.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     KeCpuPartitionMoveCpus @ 0x140575304 (KeCpuPartitionMoveCpus.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9AC4 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14082F408 (PpmHeteroComputeRelativePerformance.c)
 *     ExpWorkQueueManagerThread @ 0x1408390C0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_7;
    }
    return 0LL;
  }
  else
  {
LABEL_7:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
