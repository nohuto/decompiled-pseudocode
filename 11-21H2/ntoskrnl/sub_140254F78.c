/*
 * XREFs of sub_140254F78 @ 0x140254F78
 * Callers:
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_14068D778 @ 0x14068D778 (sub_14068D778.c)
 *     sub_14068DA14 @ 0x14068DA14 (sub_14068DA14.c)
 *     sub_1406DC040 @ 0x1406DC040 (sub_1406DC040.c)
 *     sub_14091A000 @ 0x14091A000 (sub_14091A000.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall sub_140254F78(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
