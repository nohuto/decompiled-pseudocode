/*
 * XREFs of ExDeleteLookasideListEx @ 0x140358700
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x1405D87D0 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     ExFlushLookasideListEx @ 0x140358740 (ExFlushLookasideListEx.c)
 *     ExpRemoveGeneralLookaside @ 0x140358784 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3, Lookaside);
  ExFlushLookasideListEx(Lookaside);
}
