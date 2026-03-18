/*
 * XREFs of PspStorageEmptyArray @ 0x1407F6F60
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x140678A8C (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rbp
  char v7; // al

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v6 = (void *)(*(_QWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
      *(_QWORD *)(BugCheckParameter2 + 8) = 1LL;
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        ++v2;
      }
      BugCheckParameter2 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
