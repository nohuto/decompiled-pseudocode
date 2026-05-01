/*
 * XREFs of ?OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z @ 0x1800C2E04
 * Callers:
 *     ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1800C2DB0 (-HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnForegroundChanged(KeyboardHosting::TabTipAdapter *this, HWND a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v2 + 168LL))(v2, a2, &v8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD1,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
