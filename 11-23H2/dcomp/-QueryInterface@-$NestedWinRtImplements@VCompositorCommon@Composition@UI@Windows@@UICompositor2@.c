/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074E50
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC810 (-QueryInterface@-$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U-$I.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC830 (-QueryInterface@-$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@W.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC850 (-QueryInterface@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@U_ea_1800AC850.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC870 (-QueryInterface@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@U_ea_1800AC870.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC890 (-QueryInterface@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@U_ea_1800AC890.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositor2,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 160),
           a2,
           a3);
}
