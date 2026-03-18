/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14040F8CC
 * Callers:
 *     Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback @ 0x14040F85C (Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback.c)
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040F9A0 (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 *     Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x14040FAEC (Feature_CcImprovementsForReFS__private_IsEnabledFallback.c)
 *     Feature_1714623801__private_IsEnabledFallback @ 0x14040FB6C (Feature_1714623801__private_IsEnabledFallback.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040FD34 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback @ 0x14040FDC0 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback.c)
 *     Feature_1940347194__private_IsEnabledFallback @ 0x14040FEF8 (Feature_1940347194__private_IsEnabledFallback.c)
 *     Feature_3553664313__private_IsEnabledFallback @ 0x14040FF4C (Feature_3553664313__private_IsEnabledFallback.c)
 *     Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback @ 0x14040FFB8 (Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback.c)
 *     Feature_1045946681__private_IsEnabledFallback @ 0x14041000C (Feature_1045946681__private_IsEnabledFallback.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x140410060 (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x1404100B8 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 *     Feature_2064863544__private_IsEnabledFallback @ 0x140410D34 (Feature_2064863544__private_IsEnabledFallback.c)
 *     Feature_997142843__private_IsEnabledFallback @ 0x14041155C (Feature_997142843__private_IsEnabledFallback.c)
 *     Feature_4082324794__private_IsEnabledFallback @ 0x140411FB8 (Feature_4082324794__private_IsEnabledFallback.c)
 *     Feature_1697191224__private_IsEnabledFallback @ 0x140412970 (Feature_1697191224__private_IsEnabledFallback.c)
 *     Feature_FastResource2__private_IsEnabledFallback @ 0x1404129C4 (Feature_FastResource2__private_IsEnabledFallback.c)
 *     Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback @ 0x1404169B4 (Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback.c)
 *     Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback @ 0x140419EF4 (Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback.c)
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x14041A100 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x14041A2F0 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x14041A348 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F878 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1405082BC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
