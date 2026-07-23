/*
 * XREFs of RtlpHpScheduleCompaction @ 0x1800343E4
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180044E80 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     TpSetTimerEx @ 0x180032C50 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180119BC4 (RtlpHpTlLogGCScheduled.c)
 */

__int64 RtlpHpScheduleCompaction()
{
  unsigned int v0; // ebx

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 && (v0 = 0, !byte_180187488) && RtlpHpGCTimerInitialized )
  {
    if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
    {
      TpSetTimerEx(RtlpHpGCTimer, &RtlpHpGCInterval, 0, 0x1388u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogGCScheduled();
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v0;
}
