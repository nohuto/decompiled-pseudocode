/*
 * XREFs of RtlBeginReadTickLock @ 0x1402C0024
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFF80 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x140364C20 (RtlGetMultiTimePrecise.c)
 *     KiUpdateTimeAssist @ 0x1403CF998 (KiUpdateTimeAssist.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1404616C2 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140576B24 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14085124C (KeQueryCpuSetInformation.c)
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
