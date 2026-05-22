/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FED0
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC3D0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@23.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC3F0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UI_ea_1800AC3F0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,Windows::UI::Composition::ICompositor3,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1080),
           a2);
}
