/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x140366664
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F10 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x140234100 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x1403664CC (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403833F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x140602160 (EtwpCompressBuffer.c)
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
