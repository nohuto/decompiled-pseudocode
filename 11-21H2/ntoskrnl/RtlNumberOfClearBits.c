/*
 * XREFs of RtlNumberOfClearBits @ 0x140209930
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A6B37C @ 0x140A6B37C (sub_140A6B37C.c)
 *     sub_140A7C0B8 @ 0x140A7C0B8 (sub_140A7C0B8.c)
 *     sub_140A93BA8 @ 0x140A93BA8 (sub_140A93BA8.c)
 *     sub_140A942C0 @ 0x140A942C0 (sub_140A942C0.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
