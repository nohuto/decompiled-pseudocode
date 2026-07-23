/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x140366804
 * Callers:
 *     EtwpTraceMessageVa @ 0x140227020 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14036666C (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403835CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1406026B0 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
