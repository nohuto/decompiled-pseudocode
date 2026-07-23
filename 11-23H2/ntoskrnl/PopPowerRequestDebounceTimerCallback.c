/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x140584060
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F4E8, DelayedWorkQueue);
}
