/*
 * XREFs of PopWakeInfoDereference @ 0x14058E858
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14058E3EC (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140987574 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140987674 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA107C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140AA10A8 (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
