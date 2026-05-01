/*
 * XREFs of ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1801A1528
 * Callers:
 *     ?DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800736F0 (-DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_.c)
 *     ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180107220 (-MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x1801A1410 (-CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellH.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFallbackWindow::_SizeWindow(HWND *this, struct IImmersiveMonitor *a2)
{
  int X[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 72LL))(a2, X) >= 0 )
    SetWindowPos(this[5], 0LL, X[0], X[1], 0, 0, 0x414u);
}
