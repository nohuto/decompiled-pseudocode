/*
 * XREFs of AlpcpReferenceBlob @ 0x140738B20
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x140716258 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14071697C (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x140718AAC (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407191F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x140719510 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14071C324 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14071C9C8 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DBF8 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B490 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073BDA0 (AlpcpExposeAttributes.c)
 *     AlpcpCreateSection @ 0x14076C3C8 (AlpcpCreateSection.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140778EFC (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateRegion @ 0x1407B9DC0 (AlpcpCreateRegion.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1407C6144 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDB24 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407CFE74 (AlpcpCreateReserve.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140979E9C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  signed __int64 BugCheckParameter4; // rax
  bool v2; // zf
  signed __int64 v3; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  v2 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 > 0 )
  {
    do
    {
      v3 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(BugCheckParameter2 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v3 )
        return BugCheckParameter4 + 1;
    }
    while ( BugCheckParameter4 > 0 );
    v2 = BugCheckParameter4 == 0;
  }
  if ( !v2 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
  return 0LL;
}
