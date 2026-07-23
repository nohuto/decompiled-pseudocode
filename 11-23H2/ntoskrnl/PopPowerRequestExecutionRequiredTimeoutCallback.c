/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140584090
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F5A8, DelayedWorkQueue);
}
