/*
 * XREFs of ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044CD5C
 * Callers:
 *     ?HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18044C9A8 (-HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSI.c)
 *     ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18044CA90 (-HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IM.c)
 *     ?HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18044CB44 (-HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 * Callees:
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800D4FC0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(
        ImmersiveMonitorHelper *this,
        struct IUnknown *a2)
{
  ImmersiveMonitorHelper::ConnectToMonitor(this, a2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 160LL))(*((_QWORD *)this + 10));
  return 0LL;
}
