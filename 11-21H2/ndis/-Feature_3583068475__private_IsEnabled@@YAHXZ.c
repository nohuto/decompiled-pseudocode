/*
 * XREFs of ?Feature_3583068475__private_IsEnabled@@YAHXZ @ 0x1C003470C
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0155F70 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00328B4 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0034774 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_3583068475__private_IsEnabled(void)
{
  unsigned int exchange; // eax
  unsigned int v1; // ebx
  enum wil_ReportingKind v3; // [rsp+30h] [rbp-18h]

  exchange = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
               &Feature_3583068475__private_featureState,
               &wil_details_featureDescriptors_a).exchange;
  v1 = (exchange >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_3583068475__private_reporting,
    0x30E3AABu,
    (exchange >> 8) & 1,
    (exchange >> 9) & 1,
    &Feature_3583068475_logged_traits,
    v1,
    v3);
  return v1;
}
