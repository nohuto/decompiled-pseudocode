/*
 * XREFs of ??1?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180097064
 * Callers:
 *     _CGlobalLightSet::AttachHoverPointerSourceToVisual_::_1_::dtor$3 @ 0x18006474A (_CGlobalLightSet--AttachHoverPointerSourceToVisual_--_1_--dtor$3.c)
 *     _CGlobalLightSet::Initialize_::_1_::dtor$3 @ 0x1800647D2 (_CGlobalLightSet--Initialize_--_1_--dtor$3.c)
 *     _CGlobalLightSet::Initialize_::_1_::dtor$4 @ 0x1800647E4 (_CGlobalLightSet--Initialize_--_1_--dtor$4.c)
 *     _CGlobalLightSet::Initialize_::_1_::dtor$5 @ 0x1800647F6 (_CGlobalLightSet--Initialize_--_1_--dtor$5.c)
 *     _CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource_::_1_::dtor$2 @ 0x180064886 (_CGlobalLightSet--CreateExpressionAnimationFromHoverPointerSource_--_1_--dtor$2.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$0 @ 0x180064EBA (_CAnimationEngine--AddToStoryboard_--_1_--dtor$0.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x180064ECC (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$2 @ 0x180064EDE (_CAnimationEngine--AddToStoryboard_--_1_--dtor$2.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$1 @ 0x1800653AC (_CWindowBorder--CreateBorderStructure_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$2 @ 0x1800653BE (_CWindowBorder--CreateBorderStructure_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::~ComPtr<Windows::UI::Composition::IExpressionAnimation>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
