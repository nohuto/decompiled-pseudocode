/*
 * XREFs of InitRotationManager @ 0x1C0121200
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 InitRotationManager()
{
  unsigned int v0; // ebx
  _QWORD *Pool2; // rax
  int v3; // [rsp+30h] [rbp-18h]

  v0 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_BrokeredDisplays_RotMgr__private_reporting,
    0x7BE415u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Win32kBugcheckOnFailedBCryptgenRandom_logged_traits,
    0,
    v3);
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1836347989LL);
  if ( Pool2 )
  {
    Pool2[1] = 0LL;
    *Pool2 = &CLegacyRotationMgr::`vftable';
    qword_1C0335C70 = Pool2;
  }
  else
  {
    qword_1C0335C70 = 0LL;
    return (unsigned int)-1073741801;
  }
  return v0;
}
