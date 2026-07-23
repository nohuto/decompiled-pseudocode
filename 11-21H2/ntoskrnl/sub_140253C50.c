/*
 * XREFs of sub_140253C50 @ 0x140253C50
 * Callers:
 *     sub_1402053BC @ 0x1402053BC (sub_1402053BC.c)
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

bool __fastcall sub_140253C50(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
