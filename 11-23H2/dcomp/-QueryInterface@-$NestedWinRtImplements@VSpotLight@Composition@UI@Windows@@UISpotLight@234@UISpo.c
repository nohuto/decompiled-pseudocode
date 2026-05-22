/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpotLight,Windows::UI::Composition::ISpotLight,Windows::UI::Composition::ISpotLight2,Windows::UI::Composition::ISpotLight3>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::IAmbientLight,Windows::UI::Composition::IAmbientLight2>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
