/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x140214970
 * Callers:
 *     EtwpTraceImageUnload @ 0x140211D88 (EtwpTraceImageUnload.c)
 *     EtwpTraceFileName @ 0x140213570 (EtwpTraceFileName.c)
 *     EtwpTraceIo @ 0x140214710 (EtwpTraceIo.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140466A12 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140466A9E (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x140466B76 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x140466DFA (EtwTraceReadyThread.c)
 *     EtwpTraceIoInit @ 0x140467B10 (EtwpTraceIoInit.c)
 *     EtwpProfileInterrupt @ 0x1405FE0C0 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x1405FE9C0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEC50 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FECE0 (PerfInfoLogSysCallExit.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PerfLogImageLoad @ 0x1406AD914 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x1407555EC (EtwpWriteProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E6200 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E7068 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E7174 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceSiloKernelEvent(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx

  result = EtwpHostSiloState;
  v10 = a4;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = 32LL * (unsigned int)v13;
    v14 = result + EtwpHostSiloState + 4284;
    if ( v14 )
    {
      result = v10 >> 29;
      if ( ((unsigned int)v10 & *(_DWORD *)(v14 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a2,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4232),
                   a3,
                   a5,
                   a6);
    }
  }
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 1488);
    v15 = *(_QWORD *)(result + 864);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4248);
      for ( i = !_BitScanForward(&v17, v16); !i; i = !_BitScanForward(&v17, v16) )
      {
        v18 = v17;
        v16 &= v16 - 1;
        result = 32LL * v17;
        v19 = result + v15 + 4284;
        if ( v19 )
        {
          result = v10 >> 29;
          if ( ((unsigned int)v10 & *(_DWORD *)(v19 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
            result = EtwpLogKernelEvent(a2, v15, *(unsigned __int8 *)(v15 + 2 * v18 + 4232), a3, a5, a6);
        }
      }
    }
  }
  return result;
}
