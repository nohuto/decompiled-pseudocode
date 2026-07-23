/*
 * XREFs of PoTtmInitiatePowerStateTransition @ 0x140997DF8
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1409A55D0 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopFilterCapabilities @ 0x1407A8884 (PopFilterCapabilities.c)
 *     PopTriggerMonitorPowerEvent @ 0x1407A942C (PopTriggerMonitorPowerEvent.c)
 *     PopStartStopTtmSxTranstion @ 0x14098AB98 (PopStartStopTtmSxTranstion.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int started; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[88]; // [rsp+40h] [rbp-58h] BYREF

  memset(v14, 0, 0x4CuLL);
  PopAcquirePolicyLock(v4);
  PopFilterCapabilities(&PopCapabilities, (__int64)v14);
  if ( v14[20] )
  {
    started = PopTriggerMonitorPowerEvent(a1 == 0, a2);
LABEL_8:
    v10 = started;
    goto LABEL_9;
  }
  if ( v14[3] || v14[4] || v14[5] )
  {
    started = PopStartStopTtmSxTranstion(a1);
    goto LABEL_8;
  }
  v10 = 0;
LABEL_9:
  PopReleasePolicyLock(v6, v5, v7, v8, v12, v13);
  if ( v14[20]
    && !a1
    && (!v10 || v10 == 259)
    && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
    && !PopConsoleDisplayState )
  {
    PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
    ZwUpdateWnfStateData(&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, &PopWdiCurrentScenarioInstanceId, 8u, 0LL, 0LL, 0, 0);
  }
  return v10;
}
