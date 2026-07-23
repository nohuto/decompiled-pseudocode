/*
 * XREFs of ExDeletePagedLookasideList @ 0x140358680
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1405D89D0 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CF30 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1403586B0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140358784 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  ExpFlushGeneralLookaside(Lookaside);
}
