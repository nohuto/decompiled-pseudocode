/*
 * XREFs of MiInvalidPteConforms @ 0x1402DC440
 * Callers:
 *     MiLockLeafPage @ 0x140218430 (MiLockLeafPage.c)
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiTryLockLeafPage @ 0x140219AE4 (MiTryLockLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x140284D50 (MiReservePageFileSpaceForPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiLockTransitionLeafPageEx @ 0x1403477B8 (MiLockTransitionLeafPageEx.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  if ( a1 && qword_140C65C40 )
    return (qword_140C65C40 & a1) != 0;
  return 1LL;
}
