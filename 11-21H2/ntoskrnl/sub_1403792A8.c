/*
 * XREFs of sub_1403792A8 @ 0x1403792A8
 * Callers:
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 * Callees:
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     sub_1405F72A8 @ 0x1405F72A8 (sub_1405F72A8.c)
 */

__int64 __fastcall sub_1403792A8(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    return sub_1403792D8(a1, a2, a3, a4, a5);
  else
    return sub_1405F72A8(a1, a2, a3, a4, a5);
}
