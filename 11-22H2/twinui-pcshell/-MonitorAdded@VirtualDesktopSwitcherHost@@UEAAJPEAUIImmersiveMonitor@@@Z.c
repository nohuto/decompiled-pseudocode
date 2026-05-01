/*
 * XREFs of ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180774D20
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x18028BA88 (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitcherHost::MonitorAdded(
        VirtualDesktopSwitcherHost *this,
        struct IImmersiveMonitor *a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 16;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (VirtualDesktopSwitcherHost *)16));
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
    VirtualDesktopSwitcherHost::DismissAsync((__int64)v2, &v8, 0);
    if ( v6 >= 0 )
      LeaveCriticalSection(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x132,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v4);
  }
  return result;
}
