/*
 * XREFs of WmipUnreferenceEntry @ 0x1407838E0
 * Callers:
 *     WmipSendEnableRequest @ 0x1406D88A4 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1406D8994 (WmipSendEnableDisableRequest.c)
 *     WmipAddDataSource @ 0x14075D1B4 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14075D814 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x14075D8DC (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14075DA88 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14075DD3C (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x14075EF9C (WmipMangleInstanceName.c)
 *     WmipQuerySetExecuteSI @ 0x14078362C (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x140784064 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x1407842F0 (WmipDeleteMethod.c)
 *     WmipQueryAllData @ 0x14078CD70 (WmipQueryAllData.c)
 *     WmipDSCleanup @ 0x14080E2B0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14080EEFC (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRemoveDS @ 0x1408104C0 (WmipRemoveDS.c)
 *     WmipAddMofResource @ 0x14084E03C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140855120 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1409DCFD4 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409DE380 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1409DE730 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x1409DE80C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1409DEB60 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void (__fastcall *v8)(volatile signed __int64 *); // rax
  void **v9; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v9 = (void **)*((_QWORD *)a2 + 1), *v9 != a2) )
        __fastfail(3u);
      *v9 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v9;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v8 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v8 )
      v8(a2);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
