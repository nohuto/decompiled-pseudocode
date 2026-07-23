/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x1403659C0
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x1407DF700 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  void *v7; // rdi
  char v8; // al
  char v10; // al

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v6 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( (v6 & 1) != 0 )
      {
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = 1LL;
        v7 = (void *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v7 )
        {
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ++v2;
        }
      }
      BugCheckParameter2 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
