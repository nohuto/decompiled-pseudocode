/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405C6B80
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C24348, DelayedWorkQueue);
}
