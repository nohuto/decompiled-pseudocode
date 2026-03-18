/*
 * XREFs of ?GetVBlankBoostMultiplier@CLegacySwapChain@@UEBAIXZ @ 0x1801083D0
 * Callers:
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011F650 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x1801206D0 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x180120D90 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVBlankBoostMultiplier(CLegacySwapChain *this)
{
  return *((unsigned int *)this + 84);
}
