/*
 * XREFs of sub_140579810 @ 0x140579810
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140579810()
{
  LOWORD(stru_140C2A9E0.Header.Lock) = 1;
  stru_140C2A9E0.Header.SignalState = 0;
  stru_140C2A9E0.Header.WaitListHead.Blink = &stru_140C2A9E0.Header.WaitListHead;
  stru_140C2A9E0.Header.WaitListHead.Flink = &stru_140C2A9E0.Header.WaitListHead;
  stru_140C2A9C0.Parameter = 0LL;
  stru_140C2A9C0.List.Flink = 0LL;
  stru_140C2A9E0.Header.Size = 6;
  stru_140C2A9C0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140579150;
  ExQueueWorkItem(&stru_140C2A9C0, RealTimeWorkQueue);
}
