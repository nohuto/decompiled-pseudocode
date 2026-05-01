/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VWindowActivatedEventHandler@Xaml@UI@Windows@@@@YAXPE$ADVWindowActivatedEventHandler@Xaml@UI@Windows@@@Z @ 0x18042CC10
 * Callers:
 *     _MonitorFrame::Initialize_::_1_::dtor$15 @ 0x180435207 (_MonitorFrame--Initialize_--_1_--dtor$15.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::WindowActivatedEventHandler>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
