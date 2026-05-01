/*
 * XREFs of _lambda_f14610e5b21df92a29eaabf70e3866bb_::__lambda_f14610e5b21df92a29eaabf70e3866bb_ @ 0x18040918C
 * Callers:
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1802191E5 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1804162A5 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 * Callees:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180036660 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_f14610e5b21df92a29eaabf70e3866bb_::__lambda_f14610e5b21df92a29eaabf70e3866bb_(__int64 a1)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 16));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
