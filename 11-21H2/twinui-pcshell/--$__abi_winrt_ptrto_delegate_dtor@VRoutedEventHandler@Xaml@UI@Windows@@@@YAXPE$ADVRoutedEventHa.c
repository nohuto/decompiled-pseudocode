/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VRoutedEventHandler@Xaml@UI@Windows@@@@YAXPE$ADVRoutedEventHandler@Xaml@UI@Windows@@@Z @ 0x18042CB8C
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$26 @ 0x1802132A8 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$26.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$18 @ 0x18043523D (_MonitorFrame--Initialize_--_1_--dtor$18.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::RoutedEventHandler>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
