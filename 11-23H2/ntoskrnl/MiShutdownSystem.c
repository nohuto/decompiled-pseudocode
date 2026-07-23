/*
 * XREFs of MiShutdownSystem @ 0x140AAB9E0
 * Callers:
 *     MmShutdownSystem @ 0x140AABE40 (MmShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MmUnlockPagableImageSection @ 0x14025A6D0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CcNotifyWriteBehind @ 0x140536F28 (CcNotifyWriteBehind.c)
 *     MiFlushAllFilesystemPages @ 0x1406297E4 (MiFlushAllFilesystemPages.c)
 *     MiDeleteHardwareAccelerators @ 0x140655070 (MiDeleteHardwareAccelerators.c)
 *     MiFreeLoadedImportList @ 0x140696D20 (MiFreeLoadedImportList.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5960 (MmLockPagableSectionByHandle.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiDeletePagingFiles @ 0x140A32C58 (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x140AABBE4 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  bool v4; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  SIZE_T v9; // r14
  PVOID Pool; // rax
  PVOID v11; // rsi
  PVOID v12; // rcx

  if ( !dword_140C67E44 )
  {
    MiDeleteHardwareAccelerators();
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)qword_140C6B878, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140C6B878, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140C6B878, v1, (__int64)qword_140C6B878);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    dword_140C67E44 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C6B878, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140C6B878);
    KeAbPostRelease((ULONG_PTR)qword_140C6B878);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140C6B4A8, 0, 0);
    if ( byte_140C67E42 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
    MiDeleteAllHardwareEnclaves();
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = (__int64)Lock;
    while ( v6 != &PsLoadedModuleList )
    {
      v8 = v6[17];
      if ( v8 != (_QWORD *)1 && v8 != (_QWORD *)-2LL && ((unsigned __int8)v8 & 1) == 0 )
      {
        v9 = 8LL * *v8 + 8;
        Pool = MiAllocatePool(64, v9, 0x54446D4Du);
        v11 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v8, v9);
        MiFreeLoadedImportList(v8);
        v6[17] = v11;
      }
      v12 = v6[10];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        v6[10] = 0LL;
      }
      v6 = (PVOID *)*v6;
    }
    MmReleaseLoadLock(v7);
    MiDeletePagingFiles((__int64)MiSystemPartition);
  }
  return 1;
}
