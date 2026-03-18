/*
 * XREFs of MiPageToChannel @ 0x140375870
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x14023B910 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1402673A0 (MiAcquirePageListLock.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiGetPfnChannel @ 0x1402871D0 (MiGetPfnChannel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiEnqueuePageList @ 0x1402DAA10 (MiEnqueuePageList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x1403314B0 (MiPurgingPageFromLookaside.c)
 *     MiDescribePageRun @ 0x14037548C (MiDescribePageRun.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0B7C (MiTryUnlinkNodeLargePages.c)
 *     MiInsertHugeRangeInList @ 0x140620FCC (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140622ABC (MiUnlinkHugeRange.c)
 *     MiInitializeSystemChannelOrdering @ 0x140B99B14 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140645750 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C65AD0 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
