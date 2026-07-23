/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x140605CF8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140865CE0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdx
  unsigned int v8; // edi
  size_t v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  v7 = (char *)ExBootLoaderMetadata;
  v8 = 0;
  if ( ExBootLoaderMetadata )
  {
    v9 = *(unsigned int *)ExBootLoaderMetadata;
    *a3 = v9;
    if ( a1 )
    {
      if ( a2 >= (unsigned int)v9 )
        memmove(a1, v7 + 4, v9);
      else
        v8 = -1073741820;
    }
  }
  else
  {
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
