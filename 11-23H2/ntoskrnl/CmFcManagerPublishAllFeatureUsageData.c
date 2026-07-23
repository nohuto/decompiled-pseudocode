/*
 * XREFs of CmFcManagerPublishAllFeatureUsageData @ 0x14067F778
 * Callers:
 *     CmFcShutdownSystem @ 0x140A11EF8 (CmFcShutdownSystem.c)
 * Callees:
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 */

__int64 CmFcManagerPublishAllFeatureUsageData()
{
  return CmFcpManagerPublishFeatureUsageData(CmFcSystemManager, 0LL);
}
