/*
 * XREFs of IoQueueWorkItem @ 0x14023E0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  *((_DWORD *)IoWorkItem + 16) = 0;
  v4 = sub_1403467F0(IoWorkItem, WorkerRoutine, Context);
  sub_140345DA0(v4);
}
