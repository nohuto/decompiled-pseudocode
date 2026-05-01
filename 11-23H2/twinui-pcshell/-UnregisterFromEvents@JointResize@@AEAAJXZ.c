/*
 * XREFs of ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x1801AE510
 * Callers:
 *     ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801AE4A0 (-UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1805E40F0 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::UnregisterFromEvents(JointResize *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 160);
  if ( *((_QWORD *)this + 56) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 72LL))(*v1);
    *((_QWORD *)this + 56) = 0LL;
  }
  if ( *((_QWORD *)this + 57) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 88LL))(*v1);
    *((_QWORD *)this + 57) = 0LL;
  }
  if ( *((_QWORD *)this + 58) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 104LL))(*v1);
    *((_QWORD *)this + 58) = 0LL;
  }
  v3 = *((_QWORD *)this + 19);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 80LL))(
         v3,
         ((unsigned __int64)this + 88) & -(__int64)(this != 0LL));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AE,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
