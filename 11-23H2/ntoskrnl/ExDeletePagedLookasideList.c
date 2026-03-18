/*
 * XREFs of ExDeletePagedLookasideList @ 0x1403584E0
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1405D8460 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CD30 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140358510 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1403585E4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  ExpFlushGeneralLookaside(Lookaside);
}
