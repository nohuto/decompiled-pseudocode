/*
 * XREFs of WmipUnreferenceEntry @ 0x1406C7010
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x1406C67C0 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x1406C6C70 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x1406C6D6C (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1406C7AAC (WmipQueryAllData.c)
 *     WmipSendEnableRequest @ 0x1407D615C (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6260 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1407FFD98 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407FFEE8 (WmipUpdateModifyGuid.c)
 *     WmipAddMofResource @ 0x14080EF3C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140850180 (WmipLegacyEtwWorker.c)
 *     WmipAddDataSource @ 0x14086A320 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086AA8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x14086AC88 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086AE2C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086B050 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x14086B194 (WmipMangleInstanceName.c)
 *     WmipRemoveDS @ 0x140882848 (WmipRemoveDS.c)
 *     WmipDSCleanup @ 0x140882890 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883654 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409E0780 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409E1CB0 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1409E1DFC (WmipUpdateAddGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
    ExFreeToNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
