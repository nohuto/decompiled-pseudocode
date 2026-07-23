/*
 * XREFs of RtlNumberOfClearBits @ 0x1800F81F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180088540 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
