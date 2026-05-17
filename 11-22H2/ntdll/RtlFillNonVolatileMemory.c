/*
 * XREFs of RtlFillNonVolatileMemory @ 0x180108A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFillMemoryNonTemporal @ 0x1800A3B60 (RtlFillMemoryNonTemporal.c)
 *     RtlFlushNonVolatileMemory @ 0x1801081E0 (RtlFlushNonVolatileMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlFillNonVolatileMemory(char a1, __m128i *a2, size_t a3, unsigned __int8 a4, __int16 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a5 & 3) == 1 )
  {
    if ( (a5 & 0x100) != 0 )
      LOBYTE(v5) = 1;
    goto LABEL_11;
  }
  if ( (a5 & 2) == 0 )
  {
    memset_thunk_772440563353939046(a2, a4, a3);
    return v5;
  }
  if ( a3 < 8 )
  {
LABEL_11:
    memset_thunk_772440563353939046(a2, a4, a3);
    return (unsigned int)RtlFlushNonVolatileMemory(a1, (__int64)a2, a3, v5);
  }
  RtlFillMemoryNonTemporal(a2, a3, a4);
  return v5;
}
