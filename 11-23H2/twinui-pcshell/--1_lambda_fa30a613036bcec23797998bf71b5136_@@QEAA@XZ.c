/*
 * XREFs of ??1_lambda_fa30a613036bcec23797998bf71b5136_@@QEAA@XZ @ 0x18077CCB0
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_0185f2fcaf29182e01e5e20f55c595fb____::_1_::dtor$0 @ 0x18077B6FF (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_fa30a613036bcec23797998bf71b5136____::_1_::dtor$0 @ 0x18077B963 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _lambda_fa30a613036bcec23797998bf71b5136_::~_lambda_fa30a613036bcec23797998bf71b5136_(
        _lambda_fa30a613036bcec23797998bf71b5136_ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
