/*
 * XREFs of MiGetPfnChannel @ 0x1402E8990
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1402E851C (MiReplaceNumaStandbyPage.c)
 *     MiLargePageFreeToZero @ 0x1402E86F0 (MiLargePageFreeToZero.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x1405AD7A0 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x1403B76EC (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C50710 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
