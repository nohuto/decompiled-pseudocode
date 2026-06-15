/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1800628FC
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x18005BCC8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@d.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180062840 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportVariantUsageToService(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        unsigned __int8 a7,
        int a8,
        int a9)
{
  unsigned int v10; // ecx
  int v11; // ecx

  switch ( a9 )
  {
    case 0:
      return;
    case 1:
      v11 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v11 = a6 != 0 ? 320 : 256;
      break;
    default:
      v10 = 255;
      goto LABEL_8;
  }
  v10 = a7 + v11;
LABEL_8:
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1, 0xF4D82Du, a3, a4, v10, a8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF4D82Du,
        a5,
        0LL,
        a6,
        0LL,
        (const enum wil_VariantReportingKind *)&a9,
        a7,
        1uLL);
  }
}
