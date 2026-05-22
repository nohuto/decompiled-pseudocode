/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180066C00
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180066F3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180069864 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180099F54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180099FD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009A054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B55C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B5E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B664 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAAX_NW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B6E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A7660 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A7AB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTarget@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800FFD08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTarget@@@details@wil@@QEAAX_NW4Repo.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180066ABC (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_MapReportingKind @ 0x18009A524 (wil_details_MapReportingKind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil::details::ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  _UNKNOWN **result; // rax
  unsigned int v9; // eax
  int v10; // r9d
  int v11; // r10d
  struct wil_details_FeatureReportingCache *v12; // r11
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    v9 = wil_details_MapReportingKind(a7, a6);
    result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(v12, a2, v11, v10, v9, 0, v13, *(_BYTE *)(a5 + 4));
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        LOBYTE(v14) = 0;
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v14, 1LL);
      }
    }
  }
  return result;
}
