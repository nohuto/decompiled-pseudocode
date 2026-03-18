/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C011B990
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  int v1; // [rsp+30h] [rbp-18h]
  int v2; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DesktopDisplayBroker__private_reporting,
    0xC2E90Cu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v1);
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_reporting,
      0x1229691u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_Win32kBugcheckOnFailedBCryptgenRandom_logged_traits,
      0,
      v2);
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
