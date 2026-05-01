/*
 * XREFs of ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18054D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054D958 (-_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@W4VirtualDesktopSwitchDirection@@@Z @ 0x18054DA60 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@W4VirtualDesktopSwitchDire.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054DBE8 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::HandleHotkey(CVirtualDesktopHotkeyHandler *a1, HMONITOR a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3 - 36;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return 2147500033LL;
        v7 = CVirtualDesktopHotkeyHandler::_RemoveDesktop(a1, a2);
        if ( v7 < 0 )
        {
          v8 = 42LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
            (const char *)(unsigned int)v7);
        }
      }
      else
      {
        v7 = CVirtualDesktopHotkeyHandler::_AddDesktop(a1, a2);
        if ( v7 < 0 )
        {
          v8 = 40LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v7 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, a2, 1LL);
      if ( v7 < 0 )
      {
        v8 = 38LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v7 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, a2, 0LL);
    if ( v7 < 0 )
    {
      v8 = 36LL;
      goto LABEL_14;
    }
  }
  return (unsigned int)v7;
}
