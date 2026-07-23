/*
 * XREFs of PsGetIoPriorityThread @ 0x1402A8E40
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8700 (KiAbTryIncrementIoWaiterCounts.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 *     ExpWorkerThread @ 0x1402BEE20 (ExpWorkerThread.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1DD0 (MiFinishMdlForMappedFileFault.c)
 *     MiIssueFlowThroughFault @ 0x1402EF180 (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304C20 (FsRtlpWaitForIoAtEof.c)
 *     KiAbSetMinimumThreadPriority @ 0x1403190B8 (KiAbSetMinimumThreadPriority.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x14031B40C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     IoRetrievePriorityInfo @ 0x140332B40 (IoRetrievePriorityInfo.c)
 *     PfSnCheckLoggingForThread @ 0x1403569FC (PfSnCheckLoggingForThread.c)
 *     CcForceWriteThrough @ 0x1403696C0 (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D884 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405C056C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x1407505B0 (PfSnBeginScenario.c)
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4210 (NtSetInformationVirtualMemory.c)
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
