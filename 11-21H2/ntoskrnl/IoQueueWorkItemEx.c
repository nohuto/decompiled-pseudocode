/*
 * XREFs of IoQueueWorkItemEx @ 0x140345D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  v4 = sub_1403467F0(IoWorkItem, WorkerRoutine, Context);
  sub_140345DA0(v4);
}
