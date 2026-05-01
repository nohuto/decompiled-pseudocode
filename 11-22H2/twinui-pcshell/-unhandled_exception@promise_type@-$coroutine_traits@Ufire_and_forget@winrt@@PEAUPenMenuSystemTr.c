/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x18048EE84
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1_::_1_::catch$7 @ 0x1801F2608 (_winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateM_ea_1801F2608.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x180392300 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
