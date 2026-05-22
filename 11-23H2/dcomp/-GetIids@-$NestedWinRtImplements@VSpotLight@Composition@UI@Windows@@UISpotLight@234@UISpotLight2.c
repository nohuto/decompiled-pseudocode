/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpotLight,Windows::UI::Composition::ISpotLight,Windows::UI::Composition::ISpotLight2,Windows::UI::Composition::ISpotLight3>::GetIids(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::PointLight,Windows::UI::Composition::IPointLight,Windows::UI::Composition::IPointLight2,Windows::UI::Composition::IPointLight3>::GetIids(a1 - 8);
}
