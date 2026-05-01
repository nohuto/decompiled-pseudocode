/*
 * XREFs of ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1801BDAE8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801F2490 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMo_ea_1801F2490.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *>::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
