/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x1409AE9A4
 * Callers:
 *     KeStartDynamicProcessor @ 0x140974900 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1409AFE00 (PspUpdateSingleProcessAffinity.c)
 */

_QWORD *PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rsi
  _OWORD *v1; // rdi
  __int64 v2; // rcx
  int *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 *NextProcess; // rax
  __int64 *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
  v1 = &PspLastUpdateAffinityMask;
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int64)KeActiveProcessors, (__int64)&PspLastUpdateAffinityMask) )
  {
    v2 = 2LL;
    v3 = KeActiveProcessors;
    do
    {
      v4 = *((_OWORD *)v3 + 1);
      *v1 = *(_OWORD *)v3;
      v5 = *((_OWORD *)v3 + 2);
      v1[1] = v4;
      v6 = *((_OWORD *)v3 + 3);
      v1[2] = v5;
      v7 = *((_OWORD *)v3 + 4);
      v1[3] = v6;
      v8 = *((_OWORD *)v3 + 5);
      v1[4] = v7;
      v9 = *((_OWORD *)v3 + 6);
      v1[5] = v8;
      v10 = *((_OWORD *)v3 + 7);
      v3 += 32;
      v1[6] = v9;
      v1 += 8;
      *(v1 - 1) = v10;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v1 = *(_QWORD *)v3;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess((_QWORD *)v2);
      v12 = NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v2 = (__int64)v12;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
