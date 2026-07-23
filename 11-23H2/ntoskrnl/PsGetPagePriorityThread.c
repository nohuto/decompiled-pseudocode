/*
 * XREFs of PsGetPagePriorityThread @ 0x1402E17B0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     ExpWorkerThread @ 0x1402BEE20 (ExpWorkerThread.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     PfLogFileDataAccess @ 0x1402DFE64 (PfLogFileDataAccess.c)
 *     MiInitializeInPageSupport @ 0x1402E1630 (MiInitializeInPageSupport.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     SmSetThreadPagePriority @ 0x140368EA0 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB4A8 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 12) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1076);
    if ( (unsigned int)result >= v3 )
      return v3;
  }
  return result;
}
