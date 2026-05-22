/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FB80
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIslandPartner@Private@234@UIVisualTreeIslandDesktopPartner@6234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC630 (-GetTrustLevel@-$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UI_ea_1800AC630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::IVisualTreeIslandPartner,Windows::UI::Composition::Private::IVisualTreeIslandDesktopPartner>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 496) + 32LL);
  return result;
}
