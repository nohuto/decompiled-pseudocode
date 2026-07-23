/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x1409B66D0
 * Callers:
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  PVOID v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 104);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  v6 = *(PVOID *)(a1 + 112);
  if ( v6 == MmBadPointer )
  {
    v8 = -1073740640;
  }
  else
  {
    ObfReferenceObject(v6);
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 0;
    *a2 = v7;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
