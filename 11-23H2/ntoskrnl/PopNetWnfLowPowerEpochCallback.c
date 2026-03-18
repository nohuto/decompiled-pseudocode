/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x140996A30
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407E21C0 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1409965C0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x140996720 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409967B8 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14099686C (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v7; // rdi
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 8;
  v2 = ExQueryWnfStateData(a1, &v10, v11, &v9);
  if ( v2 >= 0 )
  {
    if ( v9 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      if ( (v11[0] & 2) != 0 )
      {
        PopNetInLpePhase = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
        }
      }
      else if ( PopNetInLpePhase )
      {
        PopNetInLpePhase = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&PopNetRefreshTimer);
          if ( PopDiagHandleRegistered )
          {
            v7 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v7, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( PopNetRefreshIntervalActive )
          PopNetDisengageNetworkRefresh();
      }
      PopReleasePolicyLock(v4, v3, v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
