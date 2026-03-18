/*
 * XREFs of AlpcpUnlockBlob @ 0x14073C150
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14071A2D8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A76C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14071CC10 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcViewDestroyProcedure @ 0x14071ED50 (AlpcViewDestroyProcedure.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407384E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B350 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x14073C2B0 (AlpcpExposeAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9EC0 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407BA274 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4AC4 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CE0B4 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407D0270 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D1390 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DC078 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E9350 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14097958C (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
