/*
 * XREFs of PspTeardownPartition @ 0x1409B68B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x1406298FC (MiDeletePartition.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     PsTerminateMinimalProcess @ 0x1409B3A50 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x140A00B78 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  _DWORD *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 104, 0LL);
  v5 = *((_QWORD *)Object + 8);
  v6 = (_DWORD *)*((_QWORD *)Object + 14);
  v7 = (void *)*((_QWORD *)Object + 15);
  *((_QWORD *)Object + 8) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 15) = 0LL;
  *((_QWORD *)Object + 14) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 13);
  KeAbPostRelease((ULONG_PTR)Object + 104);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
  {
    PsTerminateMinimalProcess(v6, 0);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v6);
    ObCloseHandle(v7, 0);
  }
  PsDereferencePartition(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
