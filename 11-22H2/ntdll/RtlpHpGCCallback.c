/*
 * XREFs of RtlpHpGCCallback @ 0x1800773A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x1801187A0 (RtlpHpTlLogGCTimerFinished.c)
 */

__int64 RtlpHpGCCallback()
{
  __int64 result; // rax

  result = RtlpEnumProcessHeaps(RtlpHpGCFlushCallback, 0LL, 0LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
  return result;
}
