/*
 * XREFs of ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180043E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18035307C (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18035350C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18035480C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803549EC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::OnDismiss(CControlCenterExperienceManager *this)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( *((_DWORD *)this + 38) != 2 )
    return 0LL;
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  *(_QWORD *)v5 = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(v5, 3LL);
  v3 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)((char *)this + 24), 0LL, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v5);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BA,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3,
    v5[0]);
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v5);
  return v4;
}
