/*
 * XREFs of RtlClearAllBits @ 0x18007FCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
