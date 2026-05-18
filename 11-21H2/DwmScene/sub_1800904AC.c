/*
 * XREFs of sub_1800904AC @ 0x1800904AC
 * Callers:
 *     sub_180049728 @ 0x180049728 (sub_180049728.c)
 *     sub_180049E28 @ 0x180049E28 (sub_180049E28.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 *     sub_1800908D4 @ 0x1800908D4 (sub_1800908D4.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 *     sub_1800ADEF0 @ 0x1800ADEF0 (sub_1800ADEF0.c)
 * Callees:
 *     sub_180056A6C @ 0x180056A6C (sub_180056A6C.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

__int64 __fastcall sub_1800904AC(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r8

  v3 = sub_180056A6C(*(_QWORD *)(a1 + 1152), a2);
  if ( !(unsigned __int8)sub_1800908F8(a1, v3, v3) )
    return 511;
  return v4;
}
