/*
 * XREFs of ExpSetBootLoaderMetadata @ 0x1406058A0
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140865AA0 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpSetBootLoaderMetadata(void *Src, size_t Size)
{
  size_t v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Pool2; // rdi
  unsigned int v6; // esi

  v2 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  Pool2 = ExBootLoaderMetadata;
  v6 = 0;
  if ( ExBootLoaderMetadata )
  {
    if ( (_DWORD)v2 != *(_DWORD *)ExBootLoaderMetadata )
    {
      ExFreePoolWithTag(ExBootLoaderMetadata, 0x64506142u);
      Pool2 = 0LL;
      ExBootLoaderMetadata = 0LL;
    }
    if ( Pool2 )
      goto LABEL_9;
  }
  if ( (_DWORD)v2 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v2 + 4, 1682989378LL);
    ExBootLoaderMetadata = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_10;
    }
  }
  if ( Pool2 )
  {
LABEL_9:
    memmove(Pool2 + 1, Src, v2);
    *Pool2 = v2;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
