/*
 * XREFs of sub_140273354 @ 0x140273354
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14025191C @ 0x14025191C (sub_14025191C.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14058CAEC @ 0x14058CAEC (sub_14058CAEC.c)
 *     sub_14058E448 @ 0x14058E448 (sub_14058E448.c)
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 *     MmGetPageBadStatus @ 0x14058F140 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 *     sub_1405C4E28 @ 0x1405C4E28 (sub_1405C4E28.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140273354(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
