/*
 * XREFs of RtlNumberOfClearBits @ 0x18008CC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180080370 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
