/*
 * XREFs of sub_1800347E4 @ 0x1800347E4
 * Callers:
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800347E4(__int64 a1, int a2)
{
  return (*(_DWORD *)(a1 + 4LL * a2 + 748) & 8) != 0;
}
