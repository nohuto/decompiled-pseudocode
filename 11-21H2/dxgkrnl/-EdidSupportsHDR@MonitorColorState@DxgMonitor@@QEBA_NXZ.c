/*
 * XREFs of ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C
 * Callers:
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01A9B2C (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C020997C (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     MonitorSetAutoColorManagementSupported @ 0x1C03B1114 (MonitorSetAutoColorManagementSupported.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03B1328 (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgMonitor::MonitorColorState::EdidSupportsHDR(DxgMonitor::MonitorColorState *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 268)
    && (*((_BYTE *)this + 235) || *((_BYTE *)this + 234))
    && ((*((_DWORD *)this + 52) & 0x3C) != 0
     || (*((_DWORD *)this + 53) & 0x3C) != 0
     || (*((_DWORD *)this + 54) & 0x3C) != 0
     || (*((_DWORD *)this + 55) & 0x3C) != 0) )
  {
    return 1;
  }
  return v1;
}
