/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140873894
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopUpdateLastUserInputTime @ 0x1407A7330 (PopUpdateLastUserInputTime.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7570 (PopSetPowerSettingValueAcDc.c)
 *     PopRecordDisplayState @ 0x140873970 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x1408739BC (PopDiagTraceConsoleDisplayState.c)
 *     PopSpoilBatteryEstimate @ 0x140873A4C (PopSpoilBatteryEstimate.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  int v3; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v3 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v3);
    PopRecordDisplayState(a1);
    v3 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v3);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v3);
    LOBYTE(v2) = PopConsoleDisplayState == 0;
    PopSpoilBatteryEstimate(0LL, v2);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140C09810 = a1;
    PopReleaseRwLock(&PopSystemIdleLock);
  }
}
