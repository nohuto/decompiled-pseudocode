/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1407525EC
 * Callers:
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403DBCD0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1405CFD70 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1406EB9B0 (PopWnfMixedRealityCallback.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407EF258 (PopAdaptiveGetConsoleSessionState.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407EF514 (PopEvaluateGlobalUserStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x14080D028 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14081CD10 (PopWnfSprActiveSessionChangeCallback.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140828DE0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14083248C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x140863B7C (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14099007C (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140996C60 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409971BC (PopPdcIdleResiliencyCallback.c)
 *     PopSessionWinlogonNotification @ 0x14099CBC8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, unsigned int a2, void *Src)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 0, a2, Src);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 1, a2, Src);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
