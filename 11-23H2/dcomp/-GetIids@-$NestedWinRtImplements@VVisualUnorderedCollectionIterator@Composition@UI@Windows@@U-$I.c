/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@U?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801092A0
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@U?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@674@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB5D0 (-GetIids@-$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@Windows.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB5F0 (-GetIids@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB610 (-GetIids@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB610.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB630 (-GetIids@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB630.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AB650 (-GetIids@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualUnorderedCollectionIterator,Windows::Foundation::Collections::IIterator<Windows::UI::Composition::Visual *>>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 40),
           a2,
           a3);
}
