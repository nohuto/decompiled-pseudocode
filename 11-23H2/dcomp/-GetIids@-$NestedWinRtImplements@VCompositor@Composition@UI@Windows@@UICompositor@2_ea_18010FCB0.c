/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FCB0
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC270 (-GetIids@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UIComposit.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@234@UICompositor3@234@UICompositorWithBlurredWallpaperBackdropBrush@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC290 (-GetIids@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositor@2_ea_1800AC290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,Windows::UI::Composition::ICompositor3,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1080),
           a2,
           a3);
}
