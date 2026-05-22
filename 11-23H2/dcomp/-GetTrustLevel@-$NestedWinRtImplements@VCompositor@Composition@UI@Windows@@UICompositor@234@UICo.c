/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FA20
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC530 (-GetTrustLevel@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompos_ea_1800AC530.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC550 (-GetTrustLevel@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompos_ea_1800AC550.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,Windows::UI::Composition::ICompositor3,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 1072) + 32LL);
  return result;
}
