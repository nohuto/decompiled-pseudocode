/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x140996AE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407E2740 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x140996670 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1409967D0 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x140996868 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14099691C (PopNetIsNetworkRefreshEnabled.c)
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
  __int64 v6; // r9
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-18h] BYREF

  v12 = 8;
  v2 = ExQueryWnfStateData(a1, &v13, v14, &v12);
  if ( v2 >= 0 )
  {
    if ( v12 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      if ( (v14[0] & 2) != 0 )
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
            v8 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v8, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( PopNetRefreshIntervalActive )
          PopNetDisengageNetworkRefresh();
      }
      PopReleasePolicyLock(v4, v3, v5, v6, v10, v11);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
