/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::UI::Composition::ICompositionColorGradientStopCollection>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
           a1 - 16,
           a2);
}
