/*
 * XREFs of ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803645D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B04C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004D128 (-StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ??1EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004D920 (--1EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801193A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1803648B0 (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewHidden(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // r9
  RTL_SRWLOCK v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"EM_ViewHiddenActivity");
  v5[0].Ptr = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity *)v5);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 75,
    0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNP>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNP>::GetImpl'::`2'::impl,
    1u,
    3u,
    v3);
  CToastCenterExperienceManager::OnVisibilityChanged((CToastCenterExperienceManager *)(this - 11));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::~EM_ViewHiddenActivity((volatile signed __int32 **)v5);
  return 0LL;
}
