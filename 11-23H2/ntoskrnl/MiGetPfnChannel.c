/*
 * XREFs of MiGetPfnChannel @ 0x140287460
 * Callers:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiLargePageFreeToZero @ 0x1402871D0 (MiLargePageFreeToZero.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiGetFreeLargePage @ 0x1402D89B0 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0D5C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C49B8 (MiReplaceNumaStandbyPage.c)
 *     MiPruneStandbyPages @ 0x14046D3B0 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046F48C (MiReuseUltraPageTable.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064DC34 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EFF4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140375A10 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C65AD0 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
