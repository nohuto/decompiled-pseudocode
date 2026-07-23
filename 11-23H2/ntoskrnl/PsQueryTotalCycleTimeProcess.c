/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x14079F800
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14032A0D8 (KeUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_QWORD *)(a1 + 864);
  v7 = (_QWORD **)(a1 + 1504);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = *(v8 - 158);
    v8 = (_QWORD *)*v8;
    v6 += v9;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
