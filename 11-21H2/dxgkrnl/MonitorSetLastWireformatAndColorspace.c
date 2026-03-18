/*
 * XREFs of MonitorSetLastWireformatAndColorspace @ 0x1C01BC270
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0012D9C (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01BC350 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(__int64 a1, unsigned int a2, int a3, int a4)
{
  struct _KTHREAD **v6; // rbx
  DxgMonitor::MonitorColorState *v7; // rdi
  DxgMonitor::MonitorColorState *v8; // rcx
  struct _KTHREAD *v9; // rdi
  unsigned int v10; // edi
  struct _KTHREAD **v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v12, a1, a2, 0);
  v6 = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 115) = a3;
    v7 = v6[28];
    *((_DWORD *)v6 + 114) = a4;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 88LL))(*(_QWORD *)v7) == 12 )
      DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(v7, 1, 0);
    DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v8);
    v9 = v6[31];
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, (struct _KTHREAD *)((char *)v9 + 80));
    auto_rc<DXGK_GAMMA_RAMP>::reset((ReferenceCounted **)v9 + 16, 0LL);
    MUTEX_LOCK::~MUTEX_LOCK(&v12);
    v10 = 0;
    ExReleaseResourceLite((PERESOURCE)(v6 + 3));
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v10;
}
