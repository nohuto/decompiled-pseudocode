/*
 * XREFs of ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18017C1E8
 * Callers:
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D56D0 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18052A150 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall JointResize::IsJointResizeEnabled(JointResize *this)
{
  int v1; // eax
  char v2; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 21) + 32LL))(
         *((_QWORD *)this + 21),
         5LL,
         &v5);
  v2 = 0;
  if ( v1 >= 0 )
    return v5 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x49A,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
