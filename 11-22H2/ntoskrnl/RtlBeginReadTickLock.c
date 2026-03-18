/*
 * XREFs of RtlBeginReadTickLock @ 0x1402BFD64
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402BF804 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCC0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x140364430 (RtlGetMultiTimePrecise.c)
 *     KiUpdateTimeAssist @ 0x1403CF158 (KiUpdateTimeAssist.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140460C62 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140576684 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140851E5C (KeQueryCpuSetInformation.c)
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
