/*
 * XREFs of RtlInitializeBitMap @ 0x14023C660
 * Callers:
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
