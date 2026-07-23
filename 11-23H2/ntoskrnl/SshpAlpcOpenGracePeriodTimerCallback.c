/*
 * XREFs of SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B62A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall SshpAlpcOpenGracePeriodTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140C38588 + 6 * a2, DelayedWorkQueue);
}
