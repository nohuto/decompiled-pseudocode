/*
 * XREFs of ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800184D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180018C04 (--1EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018C30 (--$-0$$V@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019F64 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewCloaking(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _BYTE v5[320]; // [rsp+20h] [rbp-158h] BYREF

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity::EM_ViewCloakingActivity(v5, a2);
  LOBYTE(v2) = 3;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    v3,
    v2);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, 0LL);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity::~EM_ViewCloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity *)v5);
  return 0LL;
}
