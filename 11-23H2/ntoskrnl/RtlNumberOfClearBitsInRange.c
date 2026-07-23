/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1405A90B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1405A9280 (RtlNumberOfSetBitsInRange.c)
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
