/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C002E89C
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C002E278 (FxLibraryGlobalsCommission.c)
 *     ?Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled@@YAHXZ @ 0x1C0036750 (-Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C002E8EC (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int hasNotificationState,
        int isVariantConfiguration,
        const FEATURE_LOGGED_TRAITS *traits,
        int enabled,
        wil_ReportingKind kindParam)
{
  unsigned int v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+30h] [rbp-28h]

  kindParam = wil_ReportingKind_DeviceUsage;
  if ( wil_details_FeatureReporting_ReportUsageToServiceDirect(
         reporting,
         featureId,
         hasNotificationState,
         isVariantConfiguration,
         (wil_details_ServiceReportingKind)(enabled != 0
                                          ? wil_details_ServiceReportingKind_DeviceUsage
                                          : wil_details_ServiceReportingKind_PotentialDeviceUsage),
         v8,
         v9) )
  {
    if ( WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next )
      ((void (__fastcall *)(unsigned int, const FEATURE_LOGGED_TRAITS *, const FEATURE_ERROR *, int, const wil_ReportingKind *, const wil_VariantReportingKind *, unsigned __int8, unsigned __int64))WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next)(
        featureId,
        traits,
        0LL,
        enabled,
        &kindParam,
        0LL,
        0,
        1uLL);
  }
}
