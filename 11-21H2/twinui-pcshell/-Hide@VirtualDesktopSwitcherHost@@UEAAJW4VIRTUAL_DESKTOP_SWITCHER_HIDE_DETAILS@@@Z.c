/*
 * XREFs of ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x18060A090
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1801E97EC (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 *     ?TryActivateTaskbar@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1801E9998 (-TryActivateTaskbar@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::Hide(__int64 a1, int a2)
{
  __int64 v4; // rcx
  VirtualDesktopSwitcherHost *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 128;
  try
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4) )
      VirtualDesktopSwitcherHost::TryActivateTaskbar(v5);
    VirtualDesktopSwitcherHost::DismissAsync(a1 - 8, &v9, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12B,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v6);
  }
  return result;
}
