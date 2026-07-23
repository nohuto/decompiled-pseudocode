/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403C6EB0
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x1405D88D0 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CF30 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1403586B0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140358784 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
