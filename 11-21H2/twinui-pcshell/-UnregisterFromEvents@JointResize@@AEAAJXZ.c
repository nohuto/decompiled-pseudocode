/*
 * XREFs of ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x1800AAAF8
 * Callers:
 *     ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A99A0 (-UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18052A150 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::UnregisterFromEvents(JointResize *this)
{
  _QWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 72LL))(*((_QWORD *)this + 20));
    *((_QWORD *)this + 59) = 0LL;
  }
  if ( *((_QWORD *)this + 60) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 88LL))(*((_QWORD *)this + 20));
    *((_QWORD *)this + 60) = 0LL;
  }
  if ( *((_QWORD *)this + 61) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 104LL))(*((_QWORD *)this + 20));
    *((_QWORD *)this + 61) = 0LL;
  }
  if ( !(unsigned __int8)wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool((char *)this + 152) )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 80LL))(*v2, (char *)this + 88);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C6,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
