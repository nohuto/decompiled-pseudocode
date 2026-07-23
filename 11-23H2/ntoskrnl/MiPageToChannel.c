/*
 * XREFs of MiPageToChannel @ 0x140375A10
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x14023B9E0 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLargePagePromote @ 0x1402D7A60 (MiLargePagePromote.c)
 *     MiEnqueuePageList @ 0x1402DACA0 (MiEnqueuePageList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DE180 (MiPfnToStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x140331740 (MiPurgingPageFromLookaside.c)
 *     MiDescribePageRun @ 0x14037562C (MiDescribePageRun.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0D5C (MiTryUnlinkNodeLargePages.c)
 *     MiInsertHugeRangeInList @ 0x14062151C (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14062300C (MiUnlinkHugeRange.c)
 *     MiInitializeSystemChannelOrdering @ 0x140B99B14 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140645CA0 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C65AD0 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
