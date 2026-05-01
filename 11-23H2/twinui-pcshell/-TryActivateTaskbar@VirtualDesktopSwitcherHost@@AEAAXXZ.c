/*
 * XREFs of ?TryActivateTaskbar@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776A80
 * Callers:
 *     ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x180774600 (-Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherHost::TryActivateTaskbar(VirtualDesktopSwitcherHost *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
    PostMessageW(WindowW, 0x111u, 0xA031uLL, 0LL);
}
