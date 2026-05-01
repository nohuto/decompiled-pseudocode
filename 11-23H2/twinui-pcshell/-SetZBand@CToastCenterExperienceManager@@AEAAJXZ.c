/*
 * XREFs of ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x180439BDC
 * Callers:
 *     ?OnIdleStateFlagsChanged@CToastCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180070610 (-OnIdleStateFlagsChanged@CToastCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438560 (-OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18010DDF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetZBand(CToastCenterExperienceManager *this)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // edi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_QWORD *)this + 16) )
    return 0LL;
  v2 = CSingleViewShellExperience::SetWindowBand((__int64)this + 104);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    3u,
    v3);
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 16), v6);
  if ( v7 && !SetWindowPos(v7, (HWND)1, 0, 0, 0, 0, 0x13u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4F8,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
             v8);
  else
    return 0LL;
}
