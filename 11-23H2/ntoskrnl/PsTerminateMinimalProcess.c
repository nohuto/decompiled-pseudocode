/*
 * XREFs of PsTerminateMinimalProcess @ 0x1409B3850
 * Callers:
 *     SmTerminateStoreProcess @ 0x1405C9BE8 (SmTerminateStoreProcess.c)
 *     PspTeardownPartition @ 0x1409B66B0 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x1409DCBC0 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 */

bool __fastcall PsTerminateMinimalProcess(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v3; // rsi
  unsigned int v6; // ebp
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(BugCheckParameter1 + 270);
  v6 = 8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 270), 0LL);
  if ( !BugCheckParameter1[380] )
  {
    v6 = 33554440;
    if ( BugCheckParameter1[501] == 259 )
      BugCheckParameter1[501] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 281);
  v7 = _InterlockedOr(BugCheckParameter1 + 281, v6);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v6 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((__int64)BugCheckParameter1, 1);
  return result;
}
