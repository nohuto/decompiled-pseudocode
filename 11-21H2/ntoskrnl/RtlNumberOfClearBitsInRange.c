/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1405E6510
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1405E66E0 (RtlNumberOfSetBitsInRange.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // eax

  v4 = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  if ( v4 == -1 )
    return -1;
  else
    return Length - v4;
}
