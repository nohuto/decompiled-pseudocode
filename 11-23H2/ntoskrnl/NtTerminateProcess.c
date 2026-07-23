/*
 * XREFs of NtTerminateProcess @ 0x1406837E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeForceResumeThread @ 0x14030AE6C (KeForceResumeThread.c)
 *     PspTerminateProcess @ 0x1406839D4 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x140683B28 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14076DB70 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR Process; // rbp
  char PreviousMode; // r12
  NTSTATUS result; // eax
  PVOID v7; // rdi
  PVOID v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // rdi
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r8
  unsigned int v15; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x65547350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    v7 = Object;
    v8 = Object;
    v9 = *((_DWORD *)Object + 272);
    --CurrentThread->KernelApcDisable;
    v15 = v9;
    v10 = PspTerminateProcess((ULONG_PTR)v8);
    ObfDereferenceObjectWithTag(v7, 0x65547350u);
    if ( v7 == (PVOID)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 992) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread((unsigned int)ExitStatus);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v15, v10);
    }
    goto LABEL_16;
  }
  if ( PreviousMode != 1 && (*(_BYTE *)(Process + 992) & 1) == 0 || (*(_DWORD *)(Process + 2172) & 1) != 0 )
    return -1073741637;
  v11 = (volatile signed __int64 *)(Process + 1080);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(Process + 1080, 0LL);
  _m_prefetchw((const void *)(Process + 1124));
  v12 = *(_DWORD *)(Process + 1124);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v12 | 0x40000000, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 2004) == 259 )
      *(_DWORD *)(Process + 2004) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1080));
    KeAbPostRelease(Process + 1080);
    v10 = PspTerminateAllThreads(Process);
LABEL_16:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return v10;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1080));
  KeAbPostRelease(Process + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  LOBYTE(v14) = 1;
  PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v14);
  return 0;
}
