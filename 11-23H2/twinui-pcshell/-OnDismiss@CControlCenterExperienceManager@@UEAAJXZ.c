/*
 * XREFs of ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180420570
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D750 (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DE5C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x180423A8C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804241AC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::OnDismiss(CControlCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( *((_DWORD *)this + 38) == 2 )
  {
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v5,
      (__int64)"DismissControlCenterV1");
    *(_QWORD *)v5 = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(v5, 3LL);
    v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)((char *)this + 24), 0LL, 0);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v5);
      return v3;
    }
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v5);
  }
  return 0LL;
}
