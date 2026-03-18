/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18029AAC0
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18011F6E0 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180120760 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180120E40 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChain::CheckDirectFlipSupport(__int64 a1)
{
  return COverlaySwapChainBase::CheckDirectFlipSupport(a1);
}
