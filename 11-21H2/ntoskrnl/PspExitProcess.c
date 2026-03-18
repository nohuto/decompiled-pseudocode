/*
 * XREFs of PspExitProcess @ 0x1407DB734
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x14025D2C4 (ExCleanTimerResolutionRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14035FE5C (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x14035FF68 (PfpLogApplicationEvent.c)
 *     PspCallProcessNotifyRoutines @ 0x1406F80E4 (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x14070AC28 (EtwTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 *     PfSnEndProcessTrace @ 0x1407D936C (PfSnEndProcessTrace.c)
 *     DbgkFlushErrorPort @ 0x1407DBF04 (DbgkFlushErrorPort.c)
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
    PsSetProcessTelemetryAppState((_QWORD *)a2, 3);
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcess(a2, 770);
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
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    return PspProcessUnbindVirtualizedTimers(a2);
  }
  return result;
}
