/*
 * XREFs of AlpcpReferenceBlob @ 0x140739030
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x1407162C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x140718B1C (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140719264 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x140719580 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A2D8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14071CA38 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DC68 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B9A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073C2B0 (AlpcpExposeAttributes.c)
 *     AlpcpCreateSection @ 0x14076C8D8 (AlpcpCreateSection.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14077940C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateRegion @ 0x1407BA370 (AlpcpCreateRegion.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1407C66D4 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttribute @ 0x1407CE0B4 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407D03D4 (AlpcpCreateReserve.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140979F4C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
