/*
 * XREFs of sub_14082EB8C @ 0x14082EB8C
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_14064F770 @ 0x14064F770 (sub_14064F770.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B0F0F4 @ 0x140B0F0F4 (sub_140B0F0F4.c)
 *     sub_140B0F180 @ 0x140B0F180 (sub_140B0F180.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B10490 @ 0x140B10490 (sub_140B10490.c)
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B4FA10 @ 0x140B4FA10 (sub_140B4FA10.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_14082EB8C(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
