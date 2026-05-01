/*
 * XREFs of wil_details_IsEnabledFallback @ 0x18004BBD0
 * Callers:
 *     Feature_888503610__private_IsEnabledFallback @ 0x18004BC88 (Feature_888503610__private_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x180052590 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 *     Feature_Mercury_App_Backup_V2__private_IsEnabledFallback @ 0x180053554 (Feature_Mercury_App_Backup_V2__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18002A530 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18004BB7C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18006D9AC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h]

  LODWORD(v8) = a1;
  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = v8;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
