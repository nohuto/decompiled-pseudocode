/*
 * XREFs of ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1800C2DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z @ 0x1800C2E04 (-OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleForegroundChangeEvent(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  KeyboardHosting::TabTipAdapter *v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( event == 3 )
  {
    if ( TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager )
    {
      v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager
                                             + 73);
      if ( v4 )
      {
        v5 = KeyboardHosting::TabTipAdapter::OnForegroundChanged(v4, hwnd);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1842,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v5,
            v6);
      }
    }
  }
}
