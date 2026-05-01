/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@@@YAXPE$ADVBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@@Z @ 0x18042CA84
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_fa30a613036bcec23797998bf71b5136____::_1_::dtor$2 @ 0x18042B173 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChan_ea_18042B173.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
