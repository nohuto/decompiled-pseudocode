/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x140411DEC
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset(a1, 0, a2);
}
