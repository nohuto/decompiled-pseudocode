/*
 * XREFs of ??1?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1300
 * Callers:
 *     _CGlobalLightSet::AddNewRevealAmbientLight_::_1_::dtor$3 @ 0x180067E44 (_CGlobalLightSet--AddNewRevealAmbientLight_--_1_--dtor$3.c)
 *     _CGlobalLightSet::AddNewSharedDistantLightWithType_::_1_::dtor$3 @ 0x180067E68 (_CGlobalLightSet--AddNewSharedDistantLightWithType_--_1_--dtor$3.c)
 *     _CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource_::_1_::dtor$2 @ 0x180067E8C (_CGlobalLightSet--CreateExpressionAnimationFromHoverPointerSource_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$2 @ 0x1800CF0A4 (_CProjectedShadowScene--Initialize_--_1_--dtor$2.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$4 @ 0x1800CF0B0 (_CProjectedShadowScene--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::~ComPtr<Windows::UI::Composition::IExpressionAnimation>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(a1);
}
