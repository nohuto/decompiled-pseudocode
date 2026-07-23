/*
 * XREFs of sub_14099E040 @ 0x14099E040
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x140543A10 (HvlGetLpIndexFromApicId.c)
 *     sub_140549824 @ 0x140549824 (sub_140549824.c)
 */

__int64 __fastcall sub_14099E040(__int64 a1)
{
  int LpIndexFromApicId; // eax

  if ( (dword_140D0689C & 0x400) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  else
    return sub_140549824(LpIndexFromApicId, *(_OWORD **)(a1 + 8));
}
