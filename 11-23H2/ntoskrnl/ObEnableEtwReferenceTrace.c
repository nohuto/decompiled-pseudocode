/*
 * XREFs of ObEnableEtwReferenceTrace @ 0x14097C50C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5090 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

char ObEnableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  ObpTraceFlags |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
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
