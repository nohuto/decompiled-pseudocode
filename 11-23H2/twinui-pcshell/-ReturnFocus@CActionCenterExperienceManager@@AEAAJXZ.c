/*
 * XREFs of ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001842C
 * Callers:
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180018B28 (--1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018B54 (--$-0$$V@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019F64 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180419AAC (-ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // eax
  int v8[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::EM_ReturnFocusActivity(v8);
  v3 = ExperienceManagerUtils::WindowFromViewWrapper(this[19], v2);
  if ( GetForegroundWindow() == v3 )
  {
    v7 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[84] + 24LL))(this[84], 0xFFFFLL);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
      goto LABEL_4;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v8);
    v4 = 0LL;
  }
  else
  {
    v4 = 2147549183LL;
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v4);
  v5 = 0;
LABEL_4:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v8);
  return v5;
}
