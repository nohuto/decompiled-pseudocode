/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18003CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x18003CBEC (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800C92C8 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 16, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4BB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v11);
  v6 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( v6 && !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)0x80004005LL,
      v11);
    return 2147500037LL;
  }
  else
  {
    v7 = CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)((char *)this - 112));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4CA,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v11);
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
      v8);
    v9 = CActionCenterExperienceManager::RaisePropertyChangedEvent(
           (CActionCenterExperienceManager *)((char *)this - 112),
           L"SuppressAnimations",
           *((_BYTE *)this + 312));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4CF,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v11);
    return 0LL;
  }
}
