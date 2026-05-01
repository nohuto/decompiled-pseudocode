/*
 * XREFs of ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1801E97EC
 * Callers:
 *     ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180609A80 (-DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x18060A090 (-Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___::Invoke @ 0x18060A470 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_b9ce315f83a.c)
 *     ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18060A610 (-MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x1801E9484 (VirtualDesktopSwitcherHost--DismissAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall VirtualDesktopSwitcherHost::DismissAsync(__int64 a1, _BYTE *a2, int a3)
{
  void *v5; // rax
  int v7; // [rsp+258h] [rbp+10h] BYREF
  int v8; // [rsp+260h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x201uLL);
  v7 = 0;
  VirtualDesktopSwitcherHost::DismissAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
