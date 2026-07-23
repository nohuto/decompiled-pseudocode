/*
 * XREFs of sub_140534F80 @ 0x140534F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 */

__int64 __fastcall sub_140534F80(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 108) = sub_1403A3060(a1, 0);
  return 1LL;
}
