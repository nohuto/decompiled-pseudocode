/*
 * XREFs of RtlAcquireSwapReference @ 0x14035D48C
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035D43C (RtlpFcBufferManagerReferenceBuffers.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617684 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 */

unsigned __int64 __fastcall RtlAcquireSwapReference(__int64 *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // rdx
  __int64 v3; // rtt
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v1 = a1;
  while ( 1 )
  {
    _m_prefetchw(v1);
    v2 = *v1 & 1 | ((*v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v2 < 2 )
      __fastfail(0xEu);
    v3 = *v1;
    if ( v3 == _InterlockedCompareExchange64(v1, v2, *v1) )
      break;
    RtlBackoff(&v5);
  }
  return v2 & 1;
}
