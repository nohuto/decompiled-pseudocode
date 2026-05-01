/*
 * XREFs of ?OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180527680
 * Callers:
 *     ?HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180511260 (-HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@J.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnOnScreenKeyboardVisibilityChanged(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 160LL))(
         *((_QWORD *)this + 16),
         a2,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 2417LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( v7 == 2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, *((unsigned int *)this + 120));
    if ( v3 < 0 )
    {
      v4 = 2421LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
