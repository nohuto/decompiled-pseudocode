/*
 * XREFs of PfTSetTracingPriority @ 0x140AA0584
 * Callers:
 *     PfpLogEventRequest @ 0x14097DFD8 (PfpLogEventRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14036B030 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C65150, 0LL);
  MmSetAccessLogging(dword_140C6514C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65150);
  KeAbPostRelease((ULONG_PTR)&qword_140C65150);
  KeLeaveCriticalRegion();
}
