/*
 * XREFs of PsGetPagePriorityThread @ 0x14033D720
 * Callers:
 *     SmSetThreadPagePriority @ 0x140238BC4 (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x14033C4D0 (MiInitializeInPageSupport.c)
 *     MiInitializePfn @ 0x14033C880 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 *     EtwpTraceThreadRundown @ 0x1403AB344 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1405C629C (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x1406F653C (EtwTraceThread.c)
 *     PfSnAsyncContextInitialize @ 0x1407D7B88 (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
  {
    v2 = 2;
    if ( (unsigned int)result < 2 )
      return (unsigned int)result;
    return v2;
  }
  return result;
}
