/*
 * XREFs of sub_14024D7B8 @ 0x14024D7B8
 * Callers:
 *     sub_14024D740 @ 0x14024D740 (sub_14024D740.c)
 *     sub_140578398 @ 0x140578398 (sub_140578398.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024D7B8(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 72) == *(_WORD *)(a2 + 8) && *(_QWORD *)a2 )
    return *(_QWORD *)(a1 + 64) != (*(_QWORD *)a2 | *(_QWORD *)(a1 + 64)) ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
