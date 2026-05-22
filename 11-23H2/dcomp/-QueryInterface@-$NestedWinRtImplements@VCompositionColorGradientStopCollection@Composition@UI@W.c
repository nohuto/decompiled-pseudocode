/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::UI::Composition::ICompositionColorGradientStopCollection>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositor2,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
