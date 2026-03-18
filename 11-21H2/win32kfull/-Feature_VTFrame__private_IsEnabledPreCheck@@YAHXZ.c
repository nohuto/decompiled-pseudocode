/*
 * XREFs of ?Feature_VTFrame__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015BF60
 * Callers:
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C010DA80 (NtUserEnableShellWindowManagementBehavior.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 Feature_VTFrame__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VTFrame__private_reporting,
    0x1C5780Du,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v1);
  return 1LL;
}
