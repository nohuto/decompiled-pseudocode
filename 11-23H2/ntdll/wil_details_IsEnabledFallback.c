/*
 * XREFs of wil_details_IsEnabledFallback @ 0x18009E87C
 * Callers:
 *     Feature_2415126843__private_IsEnabledFallback @ 0x18009F510 (Feature_2415126843__private_IsEnabledFallback.c)
 *     Feature_2838281531__private_IsEnabledFallback @ 0x1800A08D4 (Feature_2838281531__private_IsEnabledFallback.c)
 *     Feature_3213038904__private_IsEnabledFallback @ 0x1800A0910 (Feature_3213038904__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18009E828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D756C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800D76F0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
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
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
