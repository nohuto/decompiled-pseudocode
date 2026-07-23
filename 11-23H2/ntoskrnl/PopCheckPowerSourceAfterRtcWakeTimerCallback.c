/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405908E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C568, DelayedWorkQueue);
}
