/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1407A7760
 * Callers:
 *     PopScanIdleList @ 0x14032CBA0 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403B0360 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14058DFF0 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6144 (PopEvaluateGlobalUserStatus.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A62A8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopWnfMixedRealityCallback @ 0x1407E2400 (PopWnfMixedRealityCallback.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140823760 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14084355C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x140860528 (PopMonitorProcessLoop.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140863000 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsPublishState @ 0x140864480 (PopEsPublishState.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140873AD4 (PopUpdateConsoleDisplayState.c)
 *     PopSetAwayModeStatus @ 0x14098AA0C (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140997C70 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(const GUID *a1, unsigned int a2, void *a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 0, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 1, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
