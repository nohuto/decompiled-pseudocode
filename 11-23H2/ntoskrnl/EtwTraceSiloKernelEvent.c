/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x140214950
 * Callers:
 *     EtwpTraceImageUnload @ 0x140211D68 (EtwpTraceImageUnload.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     EtwpTraceIo @ 0x1402146F0 (EtwpTraceIo.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140467072 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404670FE (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x1404671D6 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x14046745A (EtwTraceReadyThread.c)
 *     EtwpTraceIoInit @ 0x140468170 (EtwpTraceIoInit.c)
 *     EtwpProfileInterrupt @ 0x1405FE030 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x1405FE930 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEBC0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FEC50 (PerfInfoLogSysCallExit.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PerfLogImageLoad @ 0x1406AD914 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x1407550DC (EtwpWriteProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E6150 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E6FB8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E70C4 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
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
