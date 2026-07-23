/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036AD38
 * Callers:
 *     EtwpTraceMessageVa @ 0x140227020 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403835CC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140468782 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF8A8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
