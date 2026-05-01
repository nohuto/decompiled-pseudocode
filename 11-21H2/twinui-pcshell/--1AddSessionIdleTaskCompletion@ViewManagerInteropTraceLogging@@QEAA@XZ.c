/*
 * XREFs of ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180036120
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b___::_scalar_deleting_destructor_ @ 0x1800360D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b___--_scala.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18008F924 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x1802191AF (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 *     _lambda_44086093bbdca45fc7a1a4ab785b676b_::__lambda_44086093bbdca45fc7a1a4ab785b676b_ @ 0x1804091B4 (_lambda_44086093bbdca45fc7a1a4ab785b676b_--__lambda_44086093bbdca45fc7a1a4ab785b676b_.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415F54 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x180416269 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800979CC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
