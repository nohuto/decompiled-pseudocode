/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1407A7570
 * Callers:
 *     PopScanIdleList @ 0x14032C910 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403B0180 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14058DB00 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A5F54 (PopEvaluateGlobalUserStatus.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A60B8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopWnfMixedRealityCallback @ 0x1407E2130 (PopWnfMixedRealityCallback.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140823460 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14084325C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1408602E8 (PopMonitorProcessLoop.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140862DC0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsPublishState @ 0x140864240 (PopEsPublishState.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140873894 (PopUpdateConsoleDisplayState.c)
 *     PopSetAwayModeStatus @ 0x14098A80C (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140997A70 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099807C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1407829F8 (PopSetPowerSettingValue.c)
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
