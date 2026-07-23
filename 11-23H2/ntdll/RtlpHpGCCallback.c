/*
 * XREFs of RtlpHpGCCallback @ 0x180077A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x180119C20 (RtlpHpTlLogGCTimerFinished.c)
 */

void __fastcall RtlpHpGCCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  RtlpEnumProcessHeaps(RtlpHpGCFlushCallback, 0LL, 0LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
}
