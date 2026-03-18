/*
 * XREFs of MiGetPfnChannel @ 0x1402871D0
 * Callers:
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiLargePageFreeToZero @ 0x140286F40 (MiLargePageFreeToZero.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiGetFreeLargePage @ 0x1402D8720 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0B7C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDC20 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C47D8 (MiReplaceNumaStandbyPage.c)
 *     MiPruneStandbyPages @ 0x14046CFB0 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046F08C (MiReuseUltraPageTable.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064D6E4 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EAA4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140375870 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C65AD0 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
