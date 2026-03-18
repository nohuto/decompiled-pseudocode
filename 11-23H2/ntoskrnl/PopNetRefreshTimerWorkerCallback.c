/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1409968F0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x1409965C0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x140996720 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099676C (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409967B8 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14099686C (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetRefreshTimerWorkerCallback(int a1)
{
  __int64 v1; // rcx
  __int64 QuadPart; // rcx
  char v3; // dl
  LARGE_INTEGER NextDueRefreshTime; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  PopAcquirePolicyLock(a1);
  if ( PopNetInLpePhase && PopNetIsNetworkRefreshEnabled() && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( PopNetRefreshIntervalActive )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v3 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = NextDueRefreshTime.QuadPart;
    }
    else
    {
      PopNetEngageNetworkRefresh(v1);
      QuadPart = 300000000LL;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      v3 = 0;
    }
    PopNetArmRefreshTimer(QuadPart, v3);
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3A368);
  return PopReleasePolicyLock(v6, v5, v7);
}
