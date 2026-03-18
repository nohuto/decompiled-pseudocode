/*
 * XREFs of PsGetNextProcess @ 0x1407446C0
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3390 (KiUpdateProcessConcurrencyCounts.c)
 *     KeTraceHgsPlusRundown @ 0x140576D58 (KeTraceHgsPlusRundown.c)
 *     ExGetNextProcess @ 0x140742E88 (ExGetNextProcess.c)
 *     PsEnumProcesses @ 0x1407CFA2C (PsEnumProcesses.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14084FB34 (PfpRpControlRequestReset.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogMemInfoWs @ 0x1408A7044 (EtwpLogMemInfoWs.c)
 *     DbgkpCloseObject @ 0x1409371C0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x14094B1E8 (IopQueryProcessIdsUsingFile.c)
 *     IopLiveDumpExcludeProtectedProcesses @ 0x14094E058 (IopLiveDumpExcludeProtectedProcesses.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140958128 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AE854 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B39EC (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1409B3D20 (PspProcessRundownWorker.c)
 *     EtwpCoverageSamplerStop @ 0x1409F3774 (EtwpCoverageSamplerStop.c)
 *     MiHotPatchAllProcesses @ 0x140A37478 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A46180 (MiReferenceNonPagedMemoryProcessList.c)
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140B6B730 (PopEtInit.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *v4; // r15
  int v5; // ebp
  __int64 *v6; // r14
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  if ( Object )
    v6 = (__int64 *)Object[137];
  else
    v6 = (__int64 *)PsActiveProcessHead;
  if ( v6 != &PsActiveProcessHead )
  {
    while ( 1 )
    {
      v4 = v6 - 137;
      if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 137)) )
        break;
      v6 = (__int64 *)*v6;
      if ( v6 == &PsActiveProcessHead )
        goto LABEL_6;
    }
    v5 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v3;
}
