/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1409AE8AC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A437C4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x1406A70B8 (PspRequestProcessExecutionState.c)
 *     PspComputeExecutionState @ 0x1406A70DC (PspComputeExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *p_Lock; // rdi
  char v6; // bl
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  char v9; // dl
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  p_Lock = (signed __int64 *)&Process[1].Header.Lock;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
  v7 = Process[1].Affinity.StaticBitmap[16];
  if ( v7 )
  {
    v8 = v7 + 56;
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v6 = PspComputeExecutionState();
  }
  else
  {
    v8 = 56LL;
  }
  v9 = v6 | 2;
  if ( !a2 )
    v9 = v6 & 0xFD;
  PspRequestProcessExecutionState((__int64)Process, v9, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)v8);
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v10 = PspChangeProcessExecutionState(Process);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
