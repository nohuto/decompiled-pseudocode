/*
 * XREFs of sub_14026A784 @ 0x14026A784
 * Callers:
 *     sub_1402651B8 @ 0x1402651B8 (sub_1402651B8.c)
 *     sub_14026A5DC @ 0x14026A5DC (sub_14026A5DC.c)
 *     sub_14026A718 @ 0x14026A718 (sub_14026A718.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405AD9AC @ 0x1405AD9AC (sub_1405AD9AC.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     sub_1405B6108 @ 0x1405B6108 (sub_1405B6108.c)
 *     sub_1405BC4E8 @ 0x1405BC4E8 (sub_1405BC4E8.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1405C4E28 @ 0x1405C4E28 (sub_1405C4E28.c)
 *     sub_140761D88 @ 0x140761D88 (sub_140761D88.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_140AF6B44 @ 0x140AF6B44 (sub_140AF6B44.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B09B18 @ 0x140B09B18 (sub_140B09B18.c)
 *     sub_140B1A054 @ 0x140B1A054 (sub_140B1A054.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 */

__int64 __fastcall sub_14026A784(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r8

  if ( (a4 & 1) != 0 )
  {
    sub_14032A4B0(a1, a2, 4LL);
    sub_1402821F4(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)sub_14032A4B0(a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)sub_1402821F4(a1, a2, a3) )
    return 0LL;
  sub_14028CE10(a1, a2);
  return 3221225626LL;
}
