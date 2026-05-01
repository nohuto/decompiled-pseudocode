/*
 * XREFs of _lambda_28173a8c926c87e1969fb34dfb279c06_::__lambda_28173a8c926c87e1969fb34dfb279c06_ @ 0x1801F764C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::_CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___ @ 0x1801F76D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___--_CTask.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1802B8244 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1804EB68B (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 * Callees:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180084258 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_28173a8c926c87e1969fb34dfb279c06_::__lambda_28173a8c926c87e1969fb34dfb279c06_(__int64 a1)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 16));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
