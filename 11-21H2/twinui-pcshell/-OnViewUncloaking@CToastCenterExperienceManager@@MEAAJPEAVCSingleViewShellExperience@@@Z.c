/*
 * XREFs of ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180364750
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180025640 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B04C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004D258 (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004D978 (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801193A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x180365388 (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewUncloaking(
        CToastCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rbx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // r9
  RTL_SRWLOCK v13[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"EM_ViewUncloakingActivity");
  v13[0].Ptr = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v13);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v6 = (HSTRING)*((_QWORD *)this + 41);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x5F1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        v8);
  }
  v9 = CToastCenterExperienceManager::SetZBand((CToastCenterExperienceManager *)((char *)this - 88));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, 0, 0LL, 0LL, 0);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNP>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNP>::GetImpl'::`2'::impl,
    1u,
    3u,
    v11);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((volatile signed __int32 **)v13);
  return 0LL;
}
