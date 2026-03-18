/*
 * XREFs of ExDeletePagedLookasideList @ 0x140245FB0
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x140607E60 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14092D010 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140245FE0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1402460B4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
