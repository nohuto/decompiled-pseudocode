/*
 * XREFs of CmpPopulateKcbStack @ 0x1406D7D90
 * Callers:
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20648 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26650 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x1407D50FC (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r10

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v4 = *(__int16 *)(a2 + 66);
  if ( (_WORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 192);
    while ( v5 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v4, *(_QWORD *)(v5 + 16));
      v5 = *(_QWORD *)(v6 + 24);
      LOWORD(v4) = v4 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v4 + 8) = a2;
  }
  return result;
}
