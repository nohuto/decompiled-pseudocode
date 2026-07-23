/*
 * XREFs of PspMarkServerSiloAsTerminating @ 0x1409B4468
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x1405A3E14 (PspGetServerSiloStatePointer.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409E586C (EtwTraceJobServerSiloStateChange.c)
 */

char __fastcall PspMarkServerSiloAsTerminating(__int64 a1)
{
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // bl

  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int32 *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v5 = *v4;
  do
  {
    if ( v5 >= 3 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange(v4, 3, v5);
  }
  while ( v6 != v5 );
  EtwTraceJobServerSiloStateChange(a1, 3LL);
  v7 = 1;
LABEL_5:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
