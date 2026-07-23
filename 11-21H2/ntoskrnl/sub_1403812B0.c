/*
 * XREFs of sub_1403812B0 @ 0x1403812B0
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_1403820C0 @ 0x1403820C0 (sub_1403820C0.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_1403944E0 @ 0x1403944E0 (sub_1403944E0.c)
 *     sub_1405F9270 @ 0x1405F9270 (sub_1405F9270.c)
 * Callees:
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 *     sub_140381384 @ 0x140381384 (sub_140381384.c)
 */

__int64 __fastcall sub_1403812B0(__int64 a1, __int64 a2)
{
  sub_140381384(a1 + 192, a2, 1LL);
  return sub_1403812F8(*(_QWORD *)(a1 + 1912), 4LL, 1000LL, 30000LL);
}
