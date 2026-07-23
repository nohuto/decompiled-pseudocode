/*
 * XREFs of sub_14022E800 @ 0x14022E800
 * Callers:
 *     sub_14022E3B0 @ 0x14022E3B0 (sub_14022E3B0.c)
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 *     sub_14029B210 @ 0x14029B210 (sub_14029B210.c)
 *     sub_140703FB0 @ 0x140703FB0 (sub_140703FB0.c)
 * Callees:
 *     sub_14022E984 @ 0x14022E984 (sub_14022E984.c)
 *     sub_14042AB90 @ 0x14042AB90 (sub_14042AB90.c)
 */

__int64 __fastcall sub_14022E800(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return sub_14042AB90(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return sub_14022E984(a1, a2, a2);
}
