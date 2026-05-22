/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionContainerShape@Composition@UI@Windows@@UICompositionContainerShape@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FC90
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC2D0 (-GetIids@-$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC2F0 (-GetIids@-$NestedWinRtImplements@VCompositionColorGradientStopCollection@Compositio_ea_1800AC2F0.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC310 (-GetIids@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UIC.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC330 (-GetIids@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompos_ea_1800AC330.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC350 (-GetIids@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompos_ea_1800AC350.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::ICompositionContainerShape>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 160),
           a2,
           a3);
}
