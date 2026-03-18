/*
 * XREFs of ObDisableEtwReferenceTrace @ 0x1409854AC
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1406D56D0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char ObDisableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  ObpTraceFlags &= ~4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v1 = KeGetCurrentThread();
  if ( v1->SpecialApcDisable++ == -1 )
  {
    v1 = (struct _KTHREAD *)((char *)v1 + 152);
    if ( *(struct _KTHREAD **)&v1->Header.Lock != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
