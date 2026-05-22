/*
 * XREFs of ?Release@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@UISceneObject@2345@@WRL2@Microsoft@@UEAAKXZ @ 0x1800108D0
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionStrokeDashArray@Composition@UI@Windows@@U?$IVector@M@Collections@Foundation@4@U?$IIterable@M@674@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0F60 (-Release@-$NestedWinRtImplements@VCompositionStrokeDashArray@Composition@UI@Windows@@U-$IVector@.c)
 *     ?Release@?$NestedWinRtImplements@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@UICompositionTarget@345@UIDesktopWindowTarget@2345@UIDesktopWindowTargetInterop@2345@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800B0F80 (-Release@-$NestedWinRtImplements@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@UIComposit.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::UI::Composition::Scenes::ISceneObject>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 160));
}
