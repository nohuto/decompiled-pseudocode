/*
 * XREFs of ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDB0
 * Callers:
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C019D900 (MonitorGetIsAutoColorManagementSupported.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C019DC10 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021F3E0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDDC (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

bool __fastcall DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(DxgMonitor::MonitorColorState *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_BYTE *)this + 385) )
    return !DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  return v1;
}
