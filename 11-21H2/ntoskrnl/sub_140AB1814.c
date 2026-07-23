/*
 * XREFs of sub_140AB1814 @ 0x140AB1814
 * Callers:
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 * Callees:
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 */

__int64 __fastcall sub_140AB1814(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
    return sub_1403A7F70(*(_BYTE **)(a1 + 24), a1);
  else
    return 3221225485LL;
}
