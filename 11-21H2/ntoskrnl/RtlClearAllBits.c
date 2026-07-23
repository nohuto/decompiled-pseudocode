/*
 * XREFs of RtlClearAllBits @ 0x14020AE80
 * Callers:
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 *     sub_14068A024 @ 0x14068A024 (sub_14068A024.c)
 *     sub_140695078 @ 0x140695078 (sub_140695078.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_1406F3738 @ 0x1406F3738 (sub_1406F3738.c)
 *     sub_140761188 @ 0x140761188 (sub_140761188.c)
 *     sub_1407F3534 @ 0x1407F3534 (sub_1407F3534.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_140909EB0 @ 0x140909EB0 (sub_140909EB0.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 *     sub_140972A10 @ 0x140972A10 (sub_140972A10.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 *     sub_140981778 @ 0x140981778 (sub_140981778.c)
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     sub_1409E5988 @ 0x1409E5988 (sub_1409E5988.c)
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 *     sub_140A62018 @ 0x140A62018 (sub_140A62018.c)
 *     sub_140A870B0 @ 0x140A870B0 (sub_140A870B0.c)
 *     sub_140AADC80 @ 0x140AADC80 (sub_140AADC80.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
