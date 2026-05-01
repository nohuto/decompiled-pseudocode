/*
 * XREFs of ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1805255E4
 * Callers:
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180514290 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestShow(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // ebx
  bool v3; // r8
  __int64 v4; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  if ( v2 < 0 )
  {
    v4 = 2385LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  IhmNotification::SendKeyboardSetVisible(0LL, 0, v3);
  LOBYTE(v6) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 16) + 152LL))(*((_QWORD *)this + 16), v6, &v8);
  *((_BYTE *)this + 432) = 1;
  v2 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 1);
  if ( v2 < 0 )
  {
    v4 = 2396LL;
    goto LABEL_3;
  }
  return 0LL;
}
