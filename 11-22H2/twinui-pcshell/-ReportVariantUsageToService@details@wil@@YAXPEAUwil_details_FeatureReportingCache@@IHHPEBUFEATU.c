/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1803DB44C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4Variant_49686193@@W4VariantReportingKind@3@_K@Z @ 0x180242278 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4V.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x1803DB1D0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_K@Z @ 0x1803DB2A4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_K@Z @ 0x1803DB378 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x180680634 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil::details::ReportVariantUsageToService(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned int a8,
        int a9)
{
  _UNKNOWN **result; // rax
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  switch ( a9 )
  {
    case 0:
      return result;
    case 1:
      v13 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v13 = a6 != 0 ? 320 : 256;
      break;
    default:
      v12 = 255;
      goto LABEL_8;
  }
  v12 = a7 + v13;
LABEL_8:
  result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(a1, a2, a3, a4, v12, a8, v14, *(_BYTE *)(a5 + 4));
  if ( (_DWORD)result )
  {
    result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v15) = a7;
      return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, 0LL, &a9, v15, 1LL);
    }
  }
  return result;
}
