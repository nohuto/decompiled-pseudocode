/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1403C16E0
 * Callers:
 *     KiConfigureCpuSetSchedulingInformation @ 0x140382B90 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D4F0 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x1403C14F8 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403CF7B8 (KiUpdateTimeAssist.c)
 *     KeSetTagCpuSets @ 0x140576464 (KeSetTagCpuSets.c)
 *     KiCreateCpuSetForProcessor @ 0x140A8CD78 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
