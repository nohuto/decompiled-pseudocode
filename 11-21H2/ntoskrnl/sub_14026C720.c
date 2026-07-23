/*
 * XREFs of sub_14026C720 @ 0x14026C720
 * Callers:
 *     sub_14026BE94 @ 0x14026BE94 (sub_14026BE94.c)
 *     sub_14058CAEC @ 0x14058CAEC (sub_14058CAEC.c)
 *     sub_140592690 @ 0x140592690 (sub_140592690.c)
 *     sub_140592D90 @ 0x140592D90 (sub_140592D90.c)
 * Callees:
 *     sub_1405B1530 @ 0x1405B1530 (sub_1405B1530.c)
 */

_BOOL8 __fastcall sub_14026C720(__int64 a1)
{
  unsigned __int64 v2; // r8

  return (dword_140D06880 & 0x4000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3
      && *(__int64 *)(a1 + 40) >= 0
      && (!*(_QWORD *)(a1 + 8)
       || (unsigned int)sub_1405B1530() && v2 == -2LL
       || v2 <= 0xFFFFF6BFFFFFFF78uLL && v2 >= 0xFFFFF68000000000uLL);
}
