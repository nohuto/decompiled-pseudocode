/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShapeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionShape *>>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositor2,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
