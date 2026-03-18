/*
 * XREFs of ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020A0A8
 * Callers:
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4 (MonitorSetDefaultAdvancedColorParams.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 59) = 655;
  *((_DWORD *)this + 60) = 338;
  *((_DWORD *)this + 61) = 307;
  *((_DWORD *)this + 62) = 614;
  *((_DWORD *)this + 63) = 153;
  *((_DWORD *)this + 64) = 61;
  *((_DWORD *)this + 65) = 320;
  *((_DWORD *)this + 66) = 337;
  *((_DWORD *)this + 68) = 1;
}
