/*
 * XREFs of ?OnOnScreenKeyboardVisibilityChanged@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x1804632B4
 * Callers:
 *     ?HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18045F700 (-HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@J.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481D10 (-HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellR.c)
 */

void __fastcall TouchKeyboardExperienceManager::OnOnScreenKeyboardVisibilityChanged(
        TouchKeyboardExperienceManager *this,
        bool a2)
{
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TouchKeyboardExperienceManager *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v2 = *((_QWORD *)TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager + 92);
  v3 = KeyboardHosting::TabTipAdapterPolicy::HandleOnScreenKeyboardVisibilityChanged(
         (KeyboardHosting::TabTipAdapterPolicy *)(*(_QWORD *)(v2 + 112) + 16LL),
         a2,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 2731LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x190E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v4);
    return;
  }
  if ( (_DWORD)v7 == 2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(v2, 2LL, *(unsigned int *)(v2 + 528));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 2734LL;
      goto LABEL_6;
    }
  }
}
