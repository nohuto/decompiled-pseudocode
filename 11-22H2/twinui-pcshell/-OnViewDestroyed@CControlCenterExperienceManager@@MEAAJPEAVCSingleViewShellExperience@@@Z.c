/*
 * XREFs of ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B8F0 (--$-0$$V@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integ.c)
 *     ??1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E040 (--1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewDestroyed(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _BYTE v4[320]; // [rsp+20h] [rbp-158h] BYREF

  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::EM_ViewDestroyedActivity(
    (__int64)v4,
    (char)a2);
  CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)((char *)this - 104));
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v4, 0LL);
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity *)v4);
  return 0LL;
}
