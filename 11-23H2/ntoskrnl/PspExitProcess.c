/*
 * XREFs of PspExitProcess @ 0x140751434
 * Callers:
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402F6478 (PspProcessUnbindVirtualizedTimers.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF954 (PspCallProcessNotifyRoutines.c)
 *     DbgkFlushErrorPort @ 0x1407513E4 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x1407516EC (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x140754EFC (EtwTraceProcess.c)
 *     PfProcessExitNotification @ 0x140760DB4 (PfProcessExitNotification.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(a2);
    result = *(unsigned int *)(a2 + 2172);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)a2, 0LL, 0);
      result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1464);
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != (void *)1 )
  {
    result = ObfDereferenceObject(v6);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    PfProcessExitNotification(a2);
    return PspProcessUnbindVirtualizedTimers(a2);
  }
  return result;
}
