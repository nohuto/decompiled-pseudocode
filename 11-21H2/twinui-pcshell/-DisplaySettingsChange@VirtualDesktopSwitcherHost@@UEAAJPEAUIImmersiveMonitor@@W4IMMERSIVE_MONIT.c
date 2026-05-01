/*
 * XREFs of ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180609A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1801E97EC (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitcherHost::DisplaySettingsChange(__int64 a1)
{
  __int64 v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 - 16;
  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 16));
  try
  {
    v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    VirtualDesktopSwitcherHost::DismissAsync(v1, &v7, 0);
    if ( v5 >= 0 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13F,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v3);
  }
  return result;
}
