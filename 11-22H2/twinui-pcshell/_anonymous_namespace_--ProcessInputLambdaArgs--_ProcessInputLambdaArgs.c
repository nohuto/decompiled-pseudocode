/*
 * XREFs of _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x18054C7F8
 * Callers:
 *     _lambda_02ea2976da830b140e60944cbaaa9176_::__lambda_02ea2976da830b140e60944cbaaa9176_ @ 0x18054C3F8 (_lambda_02ea2976da830b140e60944cbaaa9176_--__lambda_02ea2976da830b140e60944cbaaa9176_.c)
 *     CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___::_scalar_deleting_destructor_ @ 0x18054D160 (CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___--_scalar_deleting_dest.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     _MultitaskingViewGestureHandler::ActivateGestureAction_::_1_::dtor$0 @ 0x18054D635 (_MultitaskingViewGestureHandler--ActivateGestureAction_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
}
