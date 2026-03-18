/*
 * XREFs of NtUserSetDpiForWindow @ 0x1C01FD200
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDpiForWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v10;
      *((_QWORD *)&v10 + 1) = v2;
      HMLockObject(v2);
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
        0x13C839Fu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_GdiEnableTestEscapeAPI_logged_traits,
        0,
        v9);
      UserSetLastError(50LL, v4);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return 0LL;
}
