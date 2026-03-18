/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x1407EF31C
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140224BA8 (SepSetTokenBnoIsolation.c)
 *     SepTokenDeleteMethod @ 0x140729590 (SepTokenDeleteMethod.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x14036FC80 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x140370038 (SepCloseCachedTokenHandles.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  char v7; // di
  BOOLEAN v9; // r14
  char v10; // di
  void *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v9 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v11 = *(void **)(a2 + 64);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v5;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
