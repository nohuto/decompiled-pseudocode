/*
 * XREFs of ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438120
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150F80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_ViewCloakingActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180434350 (--$-0$$V@EM_ViewCloakingActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1EM_ViewCloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804356A8 (--1EM_ViewCloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewCloaking(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // r9
  _QWORD v4[40]; // [rsp+20h] [rbp-158h] BYREF

  ToastCenterTelemetry::EM_ViewCloakingActivity::EM_ViewCloakingActivity((__int64)v4, (char)a2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNP>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNP>::GetImpl'::`2'::impl,
    1u,
    3u,
    v2);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v4, 0);
  ToastCenterTelemetry::EM_ViewCloakingActivity::~EM_ViewCloakingActivity((ToastCenterTelemetry::EM_ViewCloakingActivity *)v4);
  return 0LL;
}
