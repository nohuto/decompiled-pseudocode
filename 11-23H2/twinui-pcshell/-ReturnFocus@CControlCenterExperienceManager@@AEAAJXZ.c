/*
 * XREFs of ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422DC0
 * Callers:
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B840 (--$-0$$V@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integra.c)
 *     ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E014 (--1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x180422EB4 (-ReturnedToActiveApp@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEA.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this, char a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  HWND v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _BYTE v9[320]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::EM_ReturnFocusActivity((__int64)v9, a2);
  v4 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[18], v3);
  if ( GetForegroundWindow() != v4 )
  {
    v7 = 2147549183LL;
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[60] + 24LL))(this[60], 0xFFFFLL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity *)v9);
    v7 = 0LL;
LABEL_6:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, v7);
    v6 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EE,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity *)v9);
  return v6;
}
