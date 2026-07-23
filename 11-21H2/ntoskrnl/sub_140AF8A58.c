/*
 * XREFs of sub_140AF8A58 @ 0x140AF8A58
 * Callers:
 *     sub_140A554B0 @ 0x140A554B0 (sub_140A554B0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 */

__int64 __fastcall sub_140AF8A58(__int64 a1)
{
  unsigned int v1; // ebx
  struct _WORK_QUEUE_ITEM *v2; // rax

  v1 = 0;
  stru_140C4A480.Header.Size = 6;
  LOWORD(stru_140C4A480.Header.Lock) = 0;
  stru_140C4A480.Header.SignalState = 0;
  stru_140C4A480.Header.WaitListHead.Blink = &stru_140C4A480.Header.WaitListHead;
  stru_140C4A480.Header.WaitListHead.Flink = &stru_140C4A480.Header.WaitListHead;
  v2 = (struct _WORK_QUEUE_ITEM *)sub_1403B1F04(a1, 32LL);
  if ( v2 )
  {
    v2->Parameter = v2;
    v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140865300;
    v2->List.Flink = 0LL;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
