/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14040F26C
 * Callers:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040F1FC (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 *     Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x14040F42C (Feature_CcImprovementsForReFS__private_IsEnabledFallback.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040F5C8 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 *     Feature_3108017466__private_IsEnabledFallback @ 0x14040F654 (Feature_3108017466__private_IsEnabledFallback.c)
 *     Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback @ 0x14040F798 (Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14040F7EC (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x14040F844 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 *     Feature_813223224__private_IsEnabledFallback @ 0x140410978 (Feature_813223224__private_IsEnabledFallback.c)
 *     Feature_2932140347__private_IsEnabledFallback @ 0x1404109CC (Feature_2932140347__private_IsEnabledFallback.c)
 *     Feature_1410919738__private_IsEnabledFallback @ 0x140411724 (Feature_1410919738__private_IsEnabledFallback.c)
 *     Feature_2140978491__private_IsEnabledFallback @ 0x14041177C (Feature_2140978491__private_IsEnabledFallback.c)
 *     Feature_3190095162__private_IsEnabledFallback @ 0x1404117D0 (Feature_3190095162__private_IsEnabledFallback.c)
 *     Feature_1109720378__private_IsEnabledFallback @ 0x1404118FC (Feature_1109720378__private_IsEnabledFallback.c)
 *     Feature_Servicing_Mbr2Gpt__private_IsEnabledFallback @ 0x140412158 (Feature_Servicing_Mbr2Gpt__private_IsEnabledFallback.c)
 *     Feature_1697191224__private_IsEnabledFallback @ 0x1404122C0 (Feature_1697191224__private_IsEnabledFallback.c)
 *     Feature_FastResource2__private_IsEnabledFallback @ 0x140412314 (Feature_FastResource2__private_IsEnabledFallback.c)
 *     Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback @ 0x140416304 (Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledFallback.c)
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x1404199F8 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback.c)
 *     Feature_Servicing_SePrivilegeCheck__private_IsEnabledFallback @ 0x140419B04 (Feature_Servicing_SePrivilegeCheck__private_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x140419C34 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x140419C8C (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F218 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14050E738 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
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
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
