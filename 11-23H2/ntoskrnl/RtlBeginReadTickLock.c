/*
 * XREFs of RtlBeginReadTickLock @ 0x1402BFD94
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402BF834 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCF0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x140364A80 (RtlGetMultiTimePrecise.c)
 *     KiUpdateTimeAssist @ 0x1403CF7B8 (KiUpdateTimeAssist.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1404612C2 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1405765E4 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140850F4C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
