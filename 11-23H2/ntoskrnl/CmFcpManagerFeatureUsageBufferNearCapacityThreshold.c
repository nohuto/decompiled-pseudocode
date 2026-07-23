/*
 * XREFs of CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x14041A0DC
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpManagerFeatureUsageBufferNearCapacityThreshold(unsigned int a1)
{
  return (a1 >> 1) + (a1 >> 2);
}
