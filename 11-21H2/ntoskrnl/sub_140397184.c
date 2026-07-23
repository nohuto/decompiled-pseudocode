/*
 * XREFs of sub_140397184 @ 0x140397184
 * Callers:
 *     sub_1403970F0 @ 0x1403970F0 (sub_1403970F0.c)
 *     sub_140A517EC @ 0x140A517EC (sub_140A517EC.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_140397184(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (PVOID)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14098F2D0;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
