/*
 * XREFs of PfTAccessTracingCleanup @ 0x140A874E0
 * Callers:
 *     PfTTraceListAdd @ 0x14075EEC8 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9FF44 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F583C (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x1402F61F4 (MmGetDefaultPagePriority.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     MmSetAccessLogging @ 0x14036B030 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1404292C0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A88A18 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  char v8; // r15
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v10; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 16);
  v8 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  *(_DWORD *)(a2 + 40) = 0;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 8));
  v10 = RtlpInterlockedFlushSList(&stru_140D0C180);
  while ( v10 )
  {
    p_Next = &v10->Next;
    v10 = v10->Next;
    MmFreeAccessPfnBuffer(p_Next, v8);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, a2, 1LL);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
}
