/*
 * XREFs of sub_1405B0AC0 @ 0x1405B0AC0
 * Callers:
 *     sub_1405B11A0 @ 0x1405B11A0 (sub_1405B11A0.c)
 * Callees:
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 */

signed __int64 __fastcall sub_1405B0AC0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2 & 0xFFFFFFFFFFLL;
  sub_1402393AC(a1, a2);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0xFFE00000 | (v2 >> 19);
  return sub_1403385E0(a1, a2 >> 40);
}
