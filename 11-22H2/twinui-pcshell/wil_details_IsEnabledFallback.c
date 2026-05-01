/*
 * XREFs of wil_details_IsEnabledFallback @ 0x180285008
 * Callers:
 *     Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback @ 0x180284FB8 (Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x180284FC4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180738758 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1807388B8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bl
  __int64 v5; // rdi

  v4 = a1;
  if ( (a1 & 2) != 0 )
  {
    v5 = __PAIR64__(HIDWORD(a3), a1);
  }
  else
  {
    v5 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           Feature_AslPiiFilter_EmailAddresses__private_descriptor,
           a1,
           &Feature_AslPiiFilter_EmailAddresses__private_descriptor);
    v4 = v5;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a1, v5, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v5, a2);
  }
  return v4 & 1;
}
