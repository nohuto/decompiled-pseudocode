/*
 * XREFs of MiInitializeCfg @ 0x140B08F6C
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // rcx
  int v2; // [rsp+30h] [rbp-18h]
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_XFG_User__private_reporting,
    0x1419978u,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v2);
  if ( !MmDisableControlFlowGuardXfgOverride )
    MmEnableControlFlowGuardXfg = 1;
  v4 = 0x20000000000LL;
  result = MmCreateSection((int)&v3, 983071LL, 0, &v4, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4F3D8 = v3;
    qword_140C4F3E0 = MiSectionControlArea(v3);
    v4 = 0x4000000LL;
    result = MmCreateSection((int)&v3, 983071LL, 0, &v4, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v1 = v3;
      *(&qword_140C4F378 - 1) = v3;
      qword_140C4F378 = MiSectionControlArea(v1);
      return 0LL;
    }
  }
  return result;
}
