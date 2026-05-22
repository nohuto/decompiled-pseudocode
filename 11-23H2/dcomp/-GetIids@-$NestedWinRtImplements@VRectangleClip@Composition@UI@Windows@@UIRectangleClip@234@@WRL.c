/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VRectangleClip@Composition@UI@Windows@@UIRectangleClip@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180112850
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ACD10 (-GetIids@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVi.c)
 *     ?GetIids@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ACD30 (-GetIids@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVis_ea_1800ACD30.c)
 *     ?GetIids@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ACD50 (-GetIids@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVis_ea_1800ACD50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::RectangleClip,Windows::UI::Composition::IRectangleClip>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 168),
           a2,
           a3);
}
