/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x140583B70
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F4A8, DelayedWorkQueue);
}
