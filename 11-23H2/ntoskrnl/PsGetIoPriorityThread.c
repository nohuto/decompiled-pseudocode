/*
 * XREFs of PsGetIoPriorityThread @ 0x1402A8BB0
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250F80 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x140251210 (IopBuildDeviceIoControlRequest.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8470 (KiAbTryIncrementIoWaiterCounts.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     ExpWorkerThread @ 0x1402BEB90 (ExpWorkerThread.c)
 *     CcAsyncCopyRead @ 0x1402C1070 (CcAsyncCopyRead.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiIssueFlowThroughFault @ 0x1402EEEF0 (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318E28 (KiAbSetMinimumThreadPriority.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x14031B17C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     CcScheduleReadAheadNuma @ 0x140328FBC (CcScheduleReadAheadNuma.c)
 *     IoRetrievePriorityInfo @ 0x1403328B0 (IoRetrievePriorityInfo.c)
 *     PfSnCheckLoggingForThread @ 0x14035685C (PfSnCheckLoggingForThread.c)
 *     CcForceWriteThrough @ 0x140369520 (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D6E4 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371BF0 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpTraceThreadRundown @ 0x1403830E0 (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BFFFC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C2C4 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x1407503C0 (PfSnBeginScenario.c)
 *     NtQueryInformationThread @ 0x14079F6D0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4020 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1068);
    if ( (int)result >= v4 )
      result = (unsigned int)v4;
  }
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1440) )
      return 2LL;
  }
  return result;
}
