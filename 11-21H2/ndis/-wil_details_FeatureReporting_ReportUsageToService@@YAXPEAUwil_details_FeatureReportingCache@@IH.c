/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00328B4
 * Callers:
 *     ?Feature_3583068475__private_IsEnabled@@YAHXZ @ 0x1C003470C (-Feature_3583068475__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A88C8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0155F70 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0032904 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        enum wil_ReportingKind a7)
{
  unsigned int v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+30h] [rbp-28h]

  a7 = wil_ReportingKind_DeviceUsage;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1,
                       a2,
                       a3,
                       a4,
                       (enum wil_details_ServiceReportingKind)(a6 != 0
                                                             ? wil_details_ServiceReportingKind_DeviceUsage
                                                             : wil_details_ServiceReportingKind_PotentialDeviceUsage),
                       v8,
                       v9) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, 0, 1uLL);
  }
}
