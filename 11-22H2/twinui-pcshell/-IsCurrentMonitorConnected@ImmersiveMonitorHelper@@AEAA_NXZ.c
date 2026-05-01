/*
 * XREFs of ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x18018D300
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18018D0F4 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180502D78 (-HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ImmersiveMonitorHelper::IsCurrentMonitorConnected(ImmersiveMonitorHelper *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
    return v4 != 0;
  }
  return v2;
}
