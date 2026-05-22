/*
 * XREFs of ?Release@?$NestedWinRtImplements@VPointLight@Composition@UI@Windows@@UIPointLight@234@UIPointLight2@234@UIPointLight3@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AEC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::PointLight,Windows::UI::Composition::IPointLight,Windows::UI::Composition::IPointLight2,Windows::UI::Composition::IPointLight3>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpotLight,Windows::UI::Composition::ISpotLight,Windows::UI::Composition::ISpotLight2,Windows::UI::Composition::ISpotLight3>::Release(a1 - 8);
}
