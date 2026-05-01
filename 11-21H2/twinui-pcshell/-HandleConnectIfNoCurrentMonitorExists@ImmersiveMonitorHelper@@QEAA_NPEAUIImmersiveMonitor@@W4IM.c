/*
 * XREFs of ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18044CA90
 * Callers:
 *     s_HandleConnectIfNoCurrentMonitorExists @ 0x18044CE10 (s_HandleConnectIfNoCurrentMonitorExists.c)
 * Callees:
 *     ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180027614 (-IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044CD5C (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleConnectIfNoCurrentMonitorExists(
        ImmersiveMonitorHelper *a1,
        struct IImmersiveMonitor *a2,
        char a3)
{
  char v6; // bl
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) == 0 )
    return 0;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v10);
  if ( v7 >= 0 )
  {
    if ( v10 && !ImmersiveMonitorHelper::IsCurrentMonitorConnected(a1) )
    {
      v8 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(a1, a2);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A1,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
          (const char *)(unsigned int)v8);
      return 1;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  return v6;
}
