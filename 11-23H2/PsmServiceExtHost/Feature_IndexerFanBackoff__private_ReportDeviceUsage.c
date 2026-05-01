/*
 * XREFs of Feature_IndexerFanBackoff__private_ReportDeviceUsage @ 0x18004BA8C
 * Callers:
 *     CrmLogActivityUpdate @ 0x18002A240 (CrmLogActivityUpdate.c)
 *     CrmPolicyTableEntryGet @ 0x18002BFE4 (CrmPolicyTableEntryGet.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18002A530 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18004BAEC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_IndexerFanBackoff__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_IndexerFanBackoff__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_IndexerFanBackoff__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_IndexerFanBackoff__private_descriptor, v1, 3);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_IndexerFanBackoff__private_descriptor);
  }
  return result;
}
