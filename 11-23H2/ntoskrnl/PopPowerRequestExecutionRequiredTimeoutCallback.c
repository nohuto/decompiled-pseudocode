/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140583BA0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F588, DelayedWorkQueue);
}
