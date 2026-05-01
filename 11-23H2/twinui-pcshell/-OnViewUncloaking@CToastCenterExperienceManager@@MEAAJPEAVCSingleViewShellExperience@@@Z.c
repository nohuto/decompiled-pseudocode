/*
 * XREFs of ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438560
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18001A83C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150F80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$$V@EM_ViewUncloakingActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180434610 (--$-0$$V@EM_ViewUncloakingActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@.c)
 *     ??1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435758 (--1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x180439BDC (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
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
  _QWORD v13[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ToastCenterTelemetry::EM_ViewUncloakingActivity::EM_ViewUncloakingActivity((__int64)v13, (char)a2);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v6 = (HSTRING)*((_QWORD *)this + 44);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x65A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        v8);
  }
  v9 = CToastCenterExperienceManager::SetZBand((CToastCenterExperienceManager *)((char *)this - 88));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, 0, 0LL, 0LL, 0);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNP>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNP>::GetImpl'::`2'::impl,
    1u,
    3u,
    v11);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, 0);
  ToastCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((ToastCenterTelemetry::EM_ViewUncloakingActivity *)v13);
  return 0LL;
}
