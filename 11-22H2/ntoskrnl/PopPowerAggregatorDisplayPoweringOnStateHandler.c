/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993710
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorStartNextSession @ 0x140878154 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1408782B8 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  int v2; // edx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v4, 0, sizeof(v4));
    PopPowerAggregatorSetCurrentState((LARGE_INTEGER *)a1, (__int64)v4);
    v2 = *(_DWORD *)(a1 + 24);
    PoModernStandbyActionInProgress = 0;
    PopPowerAggregatorStartNextSession(0, v2);
  }
  return 0LL;
}
