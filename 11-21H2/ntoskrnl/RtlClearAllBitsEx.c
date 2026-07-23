/*
 * XREFs of RtlClearAllBitsEx @ 0x1402340F0
 * Callers:
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 *     sub_1409739A4 @ 0x1409739A4 (sub_1409739A4.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
