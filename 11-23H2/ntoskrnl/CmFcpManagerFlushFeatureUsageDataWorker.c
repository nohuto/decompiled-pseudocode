/*
 * XREFs of CmFcpManagerFlushFeatureUsageDataWorker @ 0x14067FC50
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 */

__int64 __fastcall CmFcpManagerFlushFeatureUsageDataWorker(__int64 a1, __int64 a2)
{
  return CmFcpManagerProcessUsageDataProviders(a2);
}
