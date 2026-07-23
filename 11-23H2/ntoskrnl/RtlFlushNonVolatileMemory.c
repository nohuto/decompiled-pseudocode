/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x1405A8160
 * Callers:
 *     RtlFillNonVolatileMemory @ 0x1405AFD50 (RtlFillNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1405AFE00 (RtlFlushNonVolatileMemoryRanges.c)
 *     RtlWriteNonVolatileMemory @ 0x1405AFED0 (RtlWriteNonVolatileMemory.c)
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1405A8130 (RtlDrainNonVolatileFlush.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemory(PVOID NvToken, PVOID NvBuffer, SIZE_T Size, DWORD Flags)
{
  char *v7; // rdx

  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    _RCX = (char *)((unsigned __int64)NvBuffer & -RtlpClFlushSize);
    v7 = (char *)NvBuffer + Size;
    if ( RtlpOptimalFlushMethod == 2 )
    {
      while ( _RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += RtlpClFlushSize;
      }
    }
    else if ( RtlpOptimalFlushMethod == 3 )
    {
      while ( _RCX < v7 )
      {
        __asm { clflushopt byte ptr [rcx] }
        _RCX += RtlpClFlushSize;
      }
    }
    else
    {
      while ( _RCX < v7 )
      {
        _mm_clflush(_RCX);
        _RCX += RtlpClFlushSize;
      }
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
