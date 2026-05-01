/*
 * XREFs of ?OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180420F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B790 (--$-0$$V@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$in.c)
 *     ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF38 (--1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnPriorityUnboostRequested(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[320]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::EM_PriorityUnboostRequested(
    (__int64)v7,
    (char)a2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 && (v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x646,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, 0LL);
    v5 = 0;
  }
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::~EM_PriorityUnboostRequested((ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested *)v7);
  return v5;
}
