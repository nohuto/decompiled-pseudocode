/*
 * XREFs of sub_14025116C @ 0x14025116C
 * Callers:
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 */

bool __fastcall sub_14025116C(_DWORD *a1)
{
  return !a1[53] || (int)(a1[58] - sub_1402E1C80() - a1[57]) >= a1[53];
}
