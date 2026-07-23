/*
 * XREFs of sub_140535570 @ 0x140535570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 */

__int64 __fastcall sub_140535570(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 108) = sub_1403A3060(a1, *(_DWORD *)(a1 + 112) & 2);
  return 1LL;
}
