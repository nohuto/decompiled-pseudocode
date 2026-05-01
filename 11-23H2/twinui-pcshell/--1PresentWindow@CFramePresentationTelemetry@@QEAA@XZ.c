/*
 * XREFs of ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180022020
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::_scalar_deleting_destructor_ @ 0x18001FB60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___--_scala.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x1800209B4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180020CC0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     _CFrameApplicationPresentation::PresentWindow_::_1_::dtor$0 @ 0x1802BBE3D (_CFrameApplicationPresentation--PresentWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180022D38 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::~PresentWindow(
        CFramePresentationTelemetry::PresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
