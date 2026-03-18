/*
 * XREFs of ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z @ 0x1C03CDE6C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01DD1FC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01DD4A4 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01DDA04 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0207930 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(DxgMonitor::MonitorColorState *this, int a2)
{
  DxgMonitor::MonitorColorState *v3; // rcx

  *((_DWORD *)this + 97) = a2;
  if ( (int)DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this) >= 0
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this) == 12 )
  {
    DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0);
    DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v3);
  }
}
