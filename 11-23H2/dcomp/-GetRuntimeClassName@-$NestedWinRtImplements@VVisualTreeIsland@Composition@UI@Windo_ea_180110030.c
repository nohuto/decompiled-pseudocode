/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180110030
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC4D0 (-GetRuntimeClassName@-$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualT.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::IVisualTreeIslandPartner,Windows::UI::Composition::Private::IVisualTreeIslandDesktopPartner>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 504),
           a2);
}
