/*
 * XREFs of ??1?$ComPtr@UIHoverPointerSourcePartner@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18009ED9C
 * Callers:
 *     _CTopLevelWindow::InitializeVisualTreeClone_::_1_::dtor$0 @ 0x180067206 (_CTopLevelWindow--InitializeVisualTreeClone_--_1_--dtor$0.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$1 @ 0x1800672B6 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$1.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderBrush_::_1_::dtor$9 @ 0x18006737C (_CWindowBorder--CCachedBorderBrush--CreateBorderBrush_--_1_--dtor$9.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$2 @ 0x1800673C4 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$2.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderBrush_::_1_::dtor$10 @ 0x18006791A (_CWindowBorder--CCachedBorderBrush--CreateBorderBrush_--_1_--dtor$10.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$0 @ 0x180067FFB (_CAnimationEngine--AddToStoryboard_--_1_--dtor$0.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x18006800D (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$2 @ 0x18006801F (_CAnimationEngine--AddToStoryboard_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IHoverPointerSourcePartner>::~ComPtr<Windows::UI::Composition::IHoverPointerSourcePartner>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
