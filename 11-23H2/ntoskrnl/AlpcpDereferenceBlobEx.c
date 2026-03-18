/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14071E93C
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpDeletePort @ 0x140718710 (AlpcpDeletePort.c)
 *     AlpcpFlushCancelQueue @ 0x140718C50 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x140719510 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14071A350 (AlpcpLocateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A6FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14071C0E8 (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14071C324 (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x14071C580 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071C848 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x14071C9C8 (AlpcpCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14071E840 (NtAlpcDeleteSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071ECE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpReleaseAttributes @ 0x140738834 (AlpcpReleaseAttributes.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x14073BDA0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14073C434 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcCreatePortSection @ 0x14076C230 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14076C3C8 (AlpcpCreateSection.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407797C0 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x1407B6140 (AlpcMessageDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9910 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1407B9AD0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1407B9CC4 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1407BCEE8 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 *     NtAlpcDeletePortSection @ 0x1407C5030 (NtAlpcDeletePortSection.c)
 *     AlpcConnectionDestroyProcedure @ 0x1407C8590 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB030 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDB24 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407CFE74 (AlpcpCreateReserve.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D0E10 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBAF8 (AlpcpReleaseViewAttribute.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A4E90 (NtAlpcDeleteResourceReserve.c)
 *     AlpcCreateSecurityContext @ 0x1409788C0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140978CF0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409794DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x14071E974 (AlpcpDestroyBlob.c)
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
