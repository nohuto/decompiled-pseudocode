/*
 * XREFs of ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180364280
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B04C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004D2F0 (-StartActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??1EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004D9A4 (--1EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801193A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewCloaking(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // r9
  RTL_SRWLOCK v4[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v4,
    (__int64)"EM_ViewCloakingActivity");
  v4[0].Ptr = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity *)v4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNP>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNP>::GetImpl'::`2'::impl,
    1u,
    3u,
    v2);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v4, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity::~EM_ViewCloakingActivity((volatile signed __int32 **)v4);
  return 0LL;
}
