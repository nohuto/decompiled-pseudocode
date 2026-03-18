/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403C6CD0
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x1405D8360 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CD30 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140358510 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1403585E4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
