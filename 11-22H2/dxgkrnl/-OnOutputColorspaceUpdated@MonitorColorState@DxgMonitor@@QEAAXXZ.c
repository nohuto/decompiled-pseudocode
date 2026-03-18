/*
 * XREFs of ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C01DD9D0
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C01DCC38 (MonitorSetLastWireformatAndColorspace.c)
 *     MonitorSetLastWireformat @ 0x1C03C4F88 (MonitorSetLastWireformat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01DD4A4 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01DDA04 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(DxgMonitor::MonitorColorState *this)
{
  DxgMonitor::MonitorColorState *v2; // rcx

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this) == 12 )
    DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v2);
}
