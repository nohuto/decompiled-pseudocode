/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14040FAAC
 * Callers:
 *     Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback @ 0x14040FA3C (Feature_Servicing_DefaultProfileIntervalQueryErrorETLVMPlatforms__private_IsEnabledFallback.c)
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040FB80 (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 *     Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x14040FCCC (Feature_CcImprovementsForReFS__private_IsEnabledFallback.c)
 *     Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledFallback @ 0x14040FD4C (Feature_Servicing_CancelWaitingIrpFix__private_IsEnabledFallback.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040FF14 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback @ 0x14040FFA0 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback.c)
 *     Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback @ 0x1404100E8 (Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14041013C (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x140410194 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 *     Feature_2415126843__private_IsEnabledFallback @ 0x14041179C (Feature_2415126843__private_IsEnabledFallback.c)
 *     Feature_2211445051__private_IsEnabledFallback @ 0x140412174 (Feature_2211445051__private_IsEnabledFallback.c)
 *     Feature_1179641144__private_IsEnabledFallback @ 0x1404121CC (Feature_1179641144__private_IsEnabledFallback.c)
 *     Feature_1358681402__private_IsEnabledFallback @ 0x1404122A4 (Feature_1358681402__private_IsEnabledFallback.c)
 *     Feature_1480059192__private_IsEnabledFallback @ 0x1404122FC (Feature_1480059192__private_IsEnabledFallback.c)
 *     Feature_1697191224__private_IsEnabledFallback @ 0x140412CB0 (Feature_1697191224__private_IsEnabledFallback.c)
 *     Feature_1597180219__private_IsEnabledFallback @ 0x140412D04 (Feature_1597180219__private_IsEnabledFallback.c)
 *     Feature_FastResource2__private_IsEnabledFallback @ 0x140412D58 (Feature_FastResource2__private_IsEnabledFallback.c)
 *     Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback @ 0x140416D48 (Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback.c)
 *     Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback @ 0x14041A284 (Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback.c)
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x14041A490 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x14041A680 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x14041A6D8 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14050880C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
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
