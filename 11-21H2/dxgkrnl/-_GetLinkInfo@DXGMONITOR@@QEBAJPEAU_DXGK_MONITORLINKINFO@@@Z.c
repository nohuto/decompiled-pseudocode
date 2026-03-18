/*
 * XREFs of ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01A6260 (MonitorGetLinkInfoFromTarget.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C021726C (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03B06F4 (MonitorIsMonitorAndLinkHDRCapable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetLinkInfo(DXGMONITOR *this, struct _DXGK_MONITORLINKINFO *a2)
{
  if ( (*((_BYTE *)this + 177) & 4) != 0 )
  {
    *a2 = *(struct _DXGK_MONITORLINKINFO *)((char *)this + 356);
    return 0LL;
  }
  else
  {
    *(_QWORD *)&a2->UsageHints.0 = 0LL;
    a2->DitheringSupport.Value = 0;
    return 3221226021LL;
  }
}
