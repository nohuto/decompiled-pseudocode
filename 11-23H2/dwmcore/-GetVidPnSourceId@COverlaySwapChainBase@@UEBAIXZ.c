/*
 * XREFs of ?GetVidPnSourceId@COverlaySwapChainBase@@UEBAIXZ @ 0x1801069E0
 * Callers:
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011F690 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x180120710 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x180120DD0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChainBase::GetVidPnSourceId(COverlaySwapChainBase *this)
{
  return *((unsigned int *)this + 28);
}
