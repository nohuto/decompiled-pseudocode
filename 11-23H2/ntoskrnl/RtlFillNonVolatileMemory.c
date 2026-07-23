/*
 * XREFs of RtlFillNonVolatileMemory @ 0x1405AFD50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFillMemoryNonTemporal @ 0x140429DA0 (RtlFillMemoryNonTemporal.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFlushNonVolatileMemory @ 0x1405A8160 (RtlFlushNonVolatileMemory.c)
 */

DWORD __cdecl RtlFillNonVolatileMemory(PVOID NvToken, void *NvDestination, SIZE_T Size, const BYTE Value, DWORD Flags)
{
  DWORD v5; // ebx

  v5 = 0;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memset(NvDestination, Value, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memset(NvDestination, Value, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlFillMemoryNonTemporal((__m128i *)NvDestination, Size, Value);
  return v5;
}
