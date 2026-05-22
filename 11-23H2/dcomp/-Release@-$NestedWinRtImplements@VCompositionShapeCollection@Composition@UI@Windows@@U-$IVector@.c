/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ACA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShapeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionShape *>>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::ICompositionContainerShape>::Release(a1 - 8);
}
