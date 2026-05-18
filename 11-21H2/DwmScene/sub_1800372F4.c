/*
 * XREFs of sub_1800372F4 @ 0x1800372F4
 * Callers:
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800372F4(__int64 a1, int a2)
{
  return (*(_DWORD *)(a1 + 4LL * a2 + 748) & 8) != 0;
}
