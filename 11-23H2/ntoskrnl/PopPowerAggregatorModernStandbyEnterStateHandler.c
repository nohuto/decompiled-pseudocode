/*
 * XREFs of PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993A90
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099357C (PopPowerAggregatorDisengageModernStandby.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyEnterStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby(a1);
  }
  else if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(a1 + 32) && !*(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
  return 0LL;
}
