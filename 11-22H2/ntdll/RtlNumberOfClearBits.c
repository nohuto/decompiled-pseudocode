/*
 * XREFs of RtlNumberOfClearBits @ 0x18008C460
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18007FD00 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
