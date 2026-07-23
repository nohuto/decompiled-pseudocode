/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x1405E4740
 * Callers:
 *     RtlFillNonVolatileMemory @ 0x1405EC320 (RtlFillNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1405EC3D0 (RtlFlushNonVolatileMemoryRanges.c)
 *     RtlWriteNonVolatileMemory @ 0x1405EC4A0 (RtlWriteNonVolatileMemory.c)
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1405E4710 (RtlDrainNonVolatileFlush.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemory(PVOID NvToken, PVOID NvBuffer, SIZE_T Size, DWORD Flags)
{
  char *v7; // rdx

  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    _RCX = (char *)((unsigned __int64)NvBuffer & -qword_140C09850);
    v7 = (char *)NvBuffer + Size;
    if ( dword_140C0D778 == 2 )
    {
      while ( _RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += qword_140C09850;
      }
    }
    else if ( dword_140C0D778 == 3 )
    {
      while ( _RCX < v7 )
      {
        __asm { clflushopt byte ptr [rcx] }
        _RCX += qword_140C09850;
      }
    }
    else
    {
      while ( _RCX < v7 )
      {
        _mm_clflush(_RCX);
        _RCX += qword_140C09850;
      }
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
