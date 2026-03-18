/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@COverlaySwapChainBase@@UEBA_NXZ @ 0x180288D80
 * Callers:
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ @ 0x18011F450 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ.c)
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ @ 0x180120BB0 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChainBase::CheckSupportsConvertPresentToMPO(COverlaySwapChainBase *this)
{
  return *((_DWORD *)this + 52) >= 2;
}
