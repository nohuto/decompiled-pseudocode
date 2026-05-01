/*
 * XREFs of _lambda_28173a8c926c87e1969fb34dfb279c06_::_lambda_28173a8c926c87e1969fb34dfb279c06_ @ 0x1801F75D0
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B1280 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

_QWORD *__fastcall lambda_28173a8c926c87e1969fb34dfb279c06_::_lambda_28173a8c926c87e1969fb34dfb279c06_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  *a1 = a2;
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(a1 + 1, *a3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 2),
    a4);
  a1[2] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  return a1;
}
