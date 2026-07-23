/*
 * XREFs of MiIsPageOnBadList @ 0x1402186C0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiConfirmCombinePageContents @ 0x140218630 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F2654 (MiQueryPfn.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x1403BB874 (MiPfnsWorthTrying.c)
 *     MmTryIdentifyPage @ 0x140626C80 (MmTryIdentifyPage.c)
 *     MiRemoveBadPages @ 0x14062A990 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14062B260 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14062B9E0 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636A30 (MiLocateSharedPageViews.c)
 *     MiArePageContentsZero @ 0x14064D970 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14065E800 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
