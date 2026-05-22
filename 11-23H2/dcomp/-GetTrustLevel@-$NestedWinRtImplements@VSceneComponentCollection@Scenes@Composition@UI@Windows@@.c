/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneComponentCollection@Scenes@Composition@UI@Windows@@UISceneObject@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FA00
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC590 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U-$IV.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@674@UICompositionColorGradientStopCollection@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC5B0 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionColorGradientStopCollection@Composition@UI@Wi.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC5D0 (-GetTrustLevel@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@2.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC5F0 (-GetTrustLevel@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UI_ea_1800AC5F0.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC610 (-GetTrustLevel@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UI_ea_1800AC610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 152) + 32LL);
  return result;
}
