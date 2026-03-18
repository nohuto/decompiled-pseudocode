/*
 * XREFs of ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18029B240
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18011F7D0 (-PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4D.c)
 *     ?PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180120F30 (-PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4D.c)
 * Callees:
 *     ?PresentDFlip@COverlaySwapChainBase@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18029CEF0 (-PresentDFlip@COverlaySwapChainBase@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 */

__int64 __fastcall CLegacySwapChain::PresentDFlip(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        DXGI_COLOR_SPACE_TYPE a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return COverlaySwapChainBase::PresentDFlip(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
