/*
 * XREFs of PopMonitorInvocation @ 0x1407A911C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A93C8 (PopProcessSessionDisplayStateChange.c)
 *     PopIsInputSuppressionEngaged @ 0x1407AA1C4 (PopIsInputSuppressionEngaged.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x14098FFDC (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x140992B6C (PopTraceMonitorOnRequestUserInput.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  if ( *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock(a1);
    if ( (unsigned __int8)PopIsInputSuppressionEngaged(v1) && (GUID *)PopWdiCurrentScenario != &NullGuid )
      PopTraceMonitorOnRequestUserInput(v1);
    LOBYTE(v4) = 1;
    v2 = PopProcessSessionDisplayStateChange(v4, v1);
    PopReleasePolicyLock();
    if ( (!v2 || v2 == 259)
      && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
      && !PopConsoleDisplayState )
    {
      PopDiagTraceMonitorOnWithLidClosed(v1);
      PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
      ZwUpdateWnfStateData(&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, &PopWdiCurrentScenarioInstanceId, 8u, 0LL, 0LL, 0, 0);
    }
  }
  return v2;
}
