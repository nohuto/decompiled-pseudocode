/*
 * XREFs of ExDeletePagedLookasideList @ 0x140357EE0
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1405D84F0 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CDE0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140357F10 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140357FE4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  ExpFlushGeneralLookaside(Lookaside);
}
