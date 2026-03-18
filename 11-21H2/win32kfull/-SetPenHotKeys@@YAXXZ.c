/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C009A5B8
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 */

void SetPenHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_PenTailDockEvents__private_reporting,
    0x13E010Eu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v5);
  LODWORD(BugCheckParameter2) = 131;
  RegisterHotKey(0LL, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 130;
  RegisterHotKey(0LL, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 129;
  RegisterHotKey(0LL, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 131;
  RegisterHotKey(0LL, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 130;
  RegisterHotKey(0LL, BugCheckParameter2d);
}
