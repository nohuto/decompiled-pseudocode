/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VRoutedEventHandler@Xaml@UI@Windows@@@@YAXPE$ADVRoutedEventHandler@Xaml@UI@Windows@@@Z @ 0x180785FA0
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$26 @ 0x1802C3959 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$26.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::RoutedEventHandler>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
