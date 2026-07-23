/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14071EB3C
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpDeletePort @ 0x140718910 (AlpcpDeletePort.c)
 *     AlpcpFlushCancelQueue @ 0x140718E50 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x140719710 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14071A550 (AlpcpLocateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A8FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14071C2E8 (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x14071C780 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071CA48 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14071EA40 (NtAlpcDeleteSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071EEE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpReleaseAttributes @ 0x140738A24 (AlpcpReleaseAttributes.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14073C624 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcCreatePortSection @ 0x14076C420 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14076C5B8 (AlpcpCreateSection.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407799B0 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x1407B6420 (AlpcMessageDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9BF0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1407B9DB0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1407BD1B8 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 *     NtAlpcDeletePortSection @ 0x1407C5300 (NtAlpcDeletePortSection.c)
 *     AlpcConnectionDestroyProcedure @ 0x1407C8860 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB300 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDDF4 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D10E0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBDC8 (AlpcpReleaseViewAttribute.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A50E0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcCreateSecurityContext @ 0x140978AC0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140978EF0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409796DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x14071EB74 (AlpcpDestroyBlob.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob(BugCheckParameter2, 0LL);
  }
  return result;
}
