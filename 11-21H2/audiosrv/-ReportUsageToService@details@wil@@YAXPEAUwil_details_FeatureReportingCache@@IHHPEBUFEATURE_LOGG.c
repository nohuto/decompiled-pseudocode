/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626F8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040A08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004F74C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180050774 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180064F5C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EF83C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EF8C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180156564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180062840 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  if ( a7 && (unsigned int)wil::details::ReportUsageToServiceDirect(a1) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
