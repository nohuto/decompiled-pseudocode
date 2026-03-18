/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405903F0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C4C8, DelayedWorkQueue);
}
