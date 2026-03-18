/*
 * XREFs of PsCaptureExceptionPort @ 0x14076E8B0
 * Callers:
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 *     PspFreezeProcessWorker @ 0x1409B3CB0 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x140A00F68 (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx

  if ( !*(_QWORD *)(a1 + 1200) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 1080);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  v4 = (void *)(*(_QWORD *)(a1 + 1200) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v4);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
