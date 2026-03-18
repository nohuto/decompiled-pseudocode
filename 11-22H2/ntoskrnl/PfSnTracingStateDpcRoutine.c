/*
 * XREFs of PfSnTracingStateDpcRoutine @ 0x1405830B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall PfSnTracingStateDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 4, DelayedWorkQueue);
}
