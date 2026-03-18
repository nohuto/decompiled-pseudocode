/*
 * XREFs of MiIsPageOnBadList @ 0x1402186C0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiConfirmCombinePageContents @ 0x140218630 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F23C4 (MiQueryPfn.c)
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x1403BB694 (MiPfnsWorthTrying.c)
 *     MmTryIdentifyPage @ 0x140626730 (MmTryIdentifyPage.c)
 *     MiRemoveBadPages @ 0x14062A440 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14062B490 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MiArePageContentsZero @ 0x14064D420 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065B604 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14065E2B0 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
