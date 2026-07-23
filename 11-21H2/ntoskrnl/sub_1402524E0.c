/*
 * XREFs of sub_1402524E0 @ 0x1402524E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1402524E0(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  v2 = (struct _WORK_QUEUE_ITEM *)&unk_140C10E00;
  if ( (_DWORD)a2 != 1 )
    v2 = &stru_140C10DE0;
  v2->List.Flink = 0LL;
  v2->Parameter = a2;
  v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140363EF0;
  ExQueueWorkItem(v2, NormalWorkQueue);
}
