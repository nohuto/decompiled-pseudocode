/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110B50
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC8B0 (-QueryInterface@-$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@U_ea_1800AC8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::IVisualTreeIslandPartner,Windows::UI::Composition::Private::IVisualTreeIslandDesktopPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 504),
           a2,
           a3);
}
