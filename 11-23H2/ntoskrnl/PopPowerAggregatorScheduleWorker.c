/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140875AF0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A6C54 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A93D4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993BB0 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140993C08 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140993F20 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x140997E00 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 | 2;
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4400), DelayedWorkQueue);
  }
}
