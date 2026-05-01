/*
 * XREFs of ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180608EE0
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@W7EAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1802A8E30 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@W7EAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806093A0 (-_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180609674 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806099A8 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::HandleHotkey(CVirtualDesktopHotkeyHandler *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 36;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 2147500033LL;
        v6 = CVirtualDesktopHotkeyHandler::_RemoveDesktop(a1);
        if ( v6 < 0 )
        {
          v7 = 64LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
            (const char *)(unsigned int)v6);
        }
      }
      else
      {
        v6 = CVirtualDesktopHotkeyHandler::_AddDesktop(a1);
        if ( v6 < 0 )
        {
          v7 = 62LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 1LL);
      if ( v6 < 0 )
      {
        v7 = 60LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v6 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 0LL);
    if ( v6 < 0 )
    {
      v7 = 58LL;
      goto LABEL_14;
    }
  }
  return (unsigned int)v6;
}
