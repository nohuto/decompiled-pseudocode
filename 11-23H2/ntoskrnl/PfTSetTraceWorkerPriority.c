/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x14035EE00
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14075F994 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1407D3AE8 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeSetPriorityThread @ 0x1402B0340 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v3;
}
