/*
 * XREFs of std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_2b601edba18b4fdf43345f97c13ddcab__const___winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_::promise_type::final_suspend @ 0x18049B5FC
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_2b601edba18b4fdf43345f97c13ddcab__const___winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
