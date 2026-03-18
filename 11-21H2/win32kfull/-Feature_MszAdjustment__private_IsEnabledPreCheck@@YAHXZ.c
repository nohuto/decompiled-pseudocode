/*
 * XREFs of ?Feature_MszAdjustment__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015ADC4
 * Callers:
 *     UpdateSizeTrackingInfo @ 0x1C02102A4 (UpdateSizeTrackingInfo.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 Feature_MszAdjustment__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MszAdjustment__private_reporting,
    0x1AA163Cu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MszAdjustment_logged_traits,
    1,
    v1);
  return 1LL;
}
