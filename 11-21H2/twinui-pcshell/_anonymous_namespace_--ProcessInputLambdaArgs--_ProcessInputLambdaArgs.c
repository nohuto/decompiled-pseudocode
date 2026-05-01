/*
 * XREFs of _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x180495DC0
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180230760 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     _MultitaskingViewGestureHandler::ActivateGestureAction_::_1_::dtor$0 @ 0x180230A8F (_MultitaskingViewGestureHandler--ActivateGestureAction_--_1_--dtor$0.c)
 *     _lambda_75bac987ac5f971a4d8840925317feb1_::__lambda_75bac987ac5f971a4d8840925317feb1_ @ 0x180495C7C (_lambda_75bac987ac5f971a4d8840925317feb1_--__lambda_75bac987ac5f971a4d8840925317feb1_.c)
 *     CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___::_scalar_deleting_destructor_ @ 0x180496330 (CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___--_scalar_deleting_dest.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(__int64 *a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 6);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 1);
}
