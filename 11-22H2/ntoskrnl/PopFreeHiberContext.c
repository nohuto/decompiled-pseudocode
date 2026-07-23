/*
 * XREFs of PopFreeHiberContext @ 0x1409886A0
 * Callers:
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1402EBFB0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140552C08 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x1405831F0 (PopInternalAddToDumpFile.c)
 *     PopBcdClearPendingResume @ 0x1408041B8 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 *     VslFreeSecureHibernateResources @ 0x1409423D0 (VslFreeSecureHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x1409884FC (PopClearHiberFileSignature.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A30AA0 (MmUnlockPreChargedPagedPool.c)
 *     MmReleaseDumpHibernateResources @ 0x140A30B28 (MmReleaseDumpHibernateResources.c)
 *     BgkResumeFinished @ 0x140A99AF8 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

_UNKNOWN **PopFreeHiberContext()
{
  _UNKNOWN **result; // rax
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v1 = qword_140C3CE60;
  BcdStoreHandle = 0LL;
  if ( qword_140C3CE60 )
  {
    if ( BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v2 = *(void **)(v1 + 240);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 128);
      if ( !v3 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v4 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140C6AD40 )
        {
          v8 = qword_140C6AD40();
          if ( v8 < 0 )
            IopDumpTraceFreeDumpStackFailure(v8);
        }
      }
    }
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140C3D050, Length);
    v9 = *(void **)(v1 + 288);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72626968u);
    v10 = *(_QWORD *)(v1 + 304);
    if ( v10 )
      MmReleaseDumpHibernateResources(v10, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
      HvlpHibernateScratchPageCount = 0;
    }
    result = (_UNKNOWN **)memset((void *)v1, 0, 0x1C8uLL);
    qword_140C3CE60 = 0LL;
  }
  return result;
}
