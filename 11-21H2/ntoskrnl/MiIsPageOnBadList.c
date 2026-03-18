/*
 * XREFs of MiIsPageOnBadList @ 0x140273354
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiQueryPfn @ 0x14025191C (MiQueryPfn.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiCopyHeaderIfResident @ 0x14029E440 (MiCopyHeaderIfResident.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MmTryIdentifyPage @ 0x14058CAEC (MmTryIdentifyPage.c)
 *     MiRemoveBadPages @ 0x14058E448 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x14058F140 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL;
}
