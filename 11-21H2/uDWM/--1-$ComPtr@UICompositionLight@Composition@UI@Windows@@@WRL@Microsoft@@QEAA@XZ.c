/*
 * XREFs of ??1?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BD40C
 * Callers:
 *     _CGlobalLightSet::AddNewRevealAmbientLight_::_1_::dtor$3 @ 0x180064792 (_CGlobalLightSet--AddNewRevealAmbientLight_--_1_--dtor$3.c)
 *     _CGlobalLightSet::AddNewRevealSpotLightWithType_::_1_::dtor$3 @ 0x18006482C (_CGlobalLightSet--AddNewRevealSpotLightWithType_--_1_--dtor$3.c)
 *     _CGlobalLightSet::AddNewSharedDistantLightWithType_::_1_::dtor$3 @ 0x180064862 (_CGlobalLightSet--AddNewSharedDistantLightWithType_--_1_--dtor$3.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$2 @ 0x1800CA9EC (_CProjectedShadowScene--Initialize_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$4 @ 0x1800CA9F8 (_CProjectedShadowScene--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::~ComPtr<Windows::UI::Composition::ICompositionLight>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(a1);
}
