/*
 * XREFs of std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb976__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::final_suspend @ 0x1801E8050
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1::operator() @ 0x1801D7D60 (_lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1--operator().c)
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1::operator() @ 0x1801D8080 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb976__const___winrt::WindowsUdk::UI::MenuItem_const___winrt::WindowsUdk::UI::MenuItemInvokedArgs_const___::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
