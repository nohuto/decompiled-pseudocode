/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036AB98
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F10 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403833F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140468382 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF338 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
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
