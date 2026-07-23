/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140873AD4
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopUpdateLastUserInputTime @ 0x1407A7520 (PopUpdateLastUserInputTime.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     PopRecordDisplayState @ 0x140873BB0 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140873BFC (PopDiagTraceConsoleDisplayState.c)
 *     PopSpoilBatteryEstimate @ 0x140873C8C (PopSpoilBatteryEstimate.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    Buffer = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &Buffer);
    PopRecordDisplayState(a1);
    Buffer = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &Buffer);
    ZwUpdateWnfStateData(&WNF_UBPM_CONSOLE_MONITOR, &Buffer, 4u, 0LL, 0LL, 0, 0);
    LOBYTE(v2) = PopConsoleDisplayState == 0;
    PopSpoilBatteryEstimate(0LL, v2);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140C09810 = a1;
    PopReleaseRwLock(&PopSystemIdleLock);
  }
}
