/*
 * XREFs of sub_1403A343C @ 0x1403A343C
 * Callers:
 *     sub_1403A2920 @ 0x1403A2920 (sub_1403A2920.c)
 *     sub_1403A2980 @ 0x1403A2980 (sub_1403A2980.c)
 *     sub_1403A2EE0 @ 0x1403A2EE0 (sub_1403A2EE0.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A343C(__int64 a1, unsigned int a2)
{
  if ( a2 < 4 || *(_DWORD *)(a1 + 120) )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}
