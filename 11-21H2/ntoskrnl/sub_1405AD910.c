/*
 * XREFs of sub_1405AD910 @ 0x1405AD910
 * Callers:
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 */

_BOOL8 __fastcall sub_1405AD910(__int64 a1, unsigned int a2, int a3)
{
  return (*(_DWORD *)(a1 + 4) & 0x20) != 0
      || *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 6616) + 16LL * a2) >= *(int *)(a1 + 16188)
      || (unsigned __int64)sub_140264BD8(
                             *(_QWORD *)(a1 + 16) + 24512 * ((unsigned __int64)a2 >> byte_140C506CC),
                             (unsigned __int8)(byte_140D069E2 & (a2 >> byte_140C506CD)),
                             a3 != 0 ? 4096 : 4098) <= 0x40;
}
