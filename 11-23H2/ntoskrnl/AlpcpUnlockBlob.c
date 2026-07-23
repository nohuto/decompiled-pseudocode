/*
 * XREFs of AlpcpUnlockBlob @ 0x14073BE30
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A8FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14071CDA0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcViewDestroyProcedure @ 0x14071EEE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407381C0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B030 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9BF0 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4804 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDDF4 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407CFFE0 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D10E0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBDC8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E90A0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409796DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
