/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x140739E34
 * Callers:
 *     AlpcpAllocateMessage @ 0x1407168A4 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x140718550 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718AAC (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140718EC0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407191F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A6FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateView @ 0x14071C324 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14071ECE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B490 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073BDA0 (AlpcpExposeAttributes.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140778EFC (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9910 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407B9CC4 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4534 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDB24 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407CFD10 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D0E10 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBAF8 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E2F70 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E8DD0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1409790C8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409794DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
