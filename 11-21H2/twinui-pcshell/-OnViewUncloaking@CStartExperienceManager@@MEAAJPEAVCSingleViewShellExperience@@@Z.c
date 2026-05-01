/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800336F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x18007398C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801191C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ??$wnf_publish_nothrow@USTART_GLOBAL_ANIMATION_DATA@StartExperienceEvents@@@wil@@YAJAEBU_WNF_STATE_NAME@@AEBUSTART_GLOBAL_ANIMATION_DATA@StartExperienceEvents@@@Z @ 0x1802D526C (--$wnf_publish_nothrow@USTART_GLOBAL_ANIMATION_DATA@StartExperienceEvents@@@wil@@YAJAEBU_WNF_STA.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  struct CSingleViewShellExperience *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v7; // [rsp+30h] [rbp-38h] BYREF
  __int16 v8; // [rsp+34h] [rbp-34h] BYREF
  _WORD v9[4]; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-28h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0LL);
  if ( (int)CStartExperienceManager::GetMonitorInformation(
              (CStartExperienceManager *)((char *)this - 96),
              v3,
              &v10,
              (enum EDGEUI_TRAYSTUCKPLACE *)&v8,
              &v7,
              0LL) >= 0 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
      v4,
      0LL);
  }
  v9[1] = *((_WORD *)this + 272);
  v9[2] = v8;
  v9[3] = 0;
  v9[0] = 0;
  wil::wnf_publish_nothrow<StartExperienceEvents::START_GLOBAL_ANIMATION_DATA>(v5, v9);
  return 0LL;
}
