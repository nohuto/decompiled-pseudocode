/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1407A7A80
 * Callers:
 *     PopScanIdleList @ 0x14032C730 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403AFAF0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14058DB90 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6464 (PopEvaluateGlobalUserStatus.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A65C8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopWnfMixedRealityCallback @ 0x1407E26B0 (PopWnfMixedRealityCallback.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1408243C0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140844FEC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x140860448 (PopMonitorProcessLoop.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140862FE0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsPublishState @ 0x140864600 (PopEsPublishState.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140873D64 (PopUpdateConsoleDisplayState.c)
 *     PopSetAwayModeStatus @ 0x14098A8BC (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140997B20 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
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
