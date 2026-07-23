/*
 * XREFs of RtlpHpScheduleCompaction @ 0x18001B788
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegLfhVsDecommit @ 0x18002EEE0 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180118348 (RtlpHpTlLogGCScheduled.c)
 */

__int64 RtlpHpScheduleCompaction()
{
  unsigned int v0; // ebx

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 && (v0 = 0, !byte_18017A188) && RtlpHpGCTimerInitialized )
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
