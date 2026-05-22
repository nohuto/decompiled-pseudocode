/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FE10
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC370 (-GetIids@-$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::IVisualTreeIslandPartner,Windows::UI::Composition::Private::IVisualTreeIslandDesktopPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 504),
           a2,
           a3);
}
