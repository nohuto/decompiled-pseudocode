/*
 * XREFs of Feature_36371531__private_IsEnabledDeviceUsage @ 0x1C0027128
 * Callers:
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1C019DCFC (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B538 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021F3E0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02263C8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0228208 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 * Callees:
 *     Feature_36371531__private_IsEnabledFallback @ 0x1C0027160 (Feature_36371531__private_IsEnabledFallback.c)
 */

__int64 Feature_36371531__private_IsEnabledDeviceUsage()
{
  if ( (Feature_36371531__private_featureState & 0x10) != 0 )
    return Feature_36371531__private_featureState & 1;
  else
    return Feature_36371531__private_IsEnabledFallback((unsigned int)Feature_36371531__private_featureState, 3LL);
}
