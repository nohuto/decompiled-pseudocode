/*
 * XREFs of _lambda_44086093bbdca45fc7a1a4ab785b676b_::__lambda_44086093bbdca45fc7a1a4ab785b676b_ @ 0x1804091B4
 * Callers:
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1802191C1 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x180416281 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180036120 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_44086093bbdca45fc7a1a4ab785b676b_::__lambda_44086093bbdca45fc7a1a4ab785b676b_(__int64 a1)
{
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)(a1 + 32));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
