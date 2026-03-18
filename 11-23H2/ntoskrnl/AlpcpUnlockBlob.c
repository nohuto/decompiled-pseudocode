/*
 * XREFs of AlpcpUnlockBlob @ 0x14073BC40
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A6FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x14071BEB8 (AlpcpUnlockMessage.c)
 *     AlpcpCreateView @ 0x14071C324 (AlpcpCreateView.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14071CBA0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcViewDestroyProcedure @ 0x14071ECE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140737FD0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073AE40 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x14073BDA0 (AlpcpExposeAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D5D0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9910 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407B9CC4 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4534 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDB24 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407CFD10 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D0E10 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBAF8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E8DD0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409794DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v1; // dl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rbp
  void *v6; // rcx

  v1 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v1 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v1 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (BugCheckParameter4 = v3
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v3 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (__fastcall **)(ULONG_PTR))(v5 + 24))(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    if ( (*(int (__fastcall **)(ULONG_PTR))(v5 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v5 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v6 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v5 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v6);
        else
          ExFreePoolWithTag(v6, *(_DWORD *)(v5 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
