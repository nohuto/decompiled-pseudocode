/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpotLight,Windows::UI::Composition::ISpotLight,Windows::UI::Composition::ISpotLight2,Windows::UI::Composition::ISpotLight3>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::IAmbientLight,Windows::UI::Composition::IAmbientLight2>::AddRef(a1 - 16);
}
