/*
 * XREFs of AlpcpReferenceBlob @ 0x140738D10
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x140718CAC (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407193F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x140719710 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DDF8 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B680 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpCreateSection @ 0x14076C5B8 (AlpcpCreateSection.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1407790EC (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateRegion @ 0x1407BA0A0 (AlpcpCreateRegion.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1407C6414 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDDF4 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x14097A09C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
