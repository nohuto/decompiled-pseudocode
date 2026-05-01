/*
 * XREFs of _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::catch$10 @ 0x180195CC7
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMiniSearchExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBAXXZ @ 0x1801D0138 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVMiniSearchExper.c)
 */

void __fastcall __noreturn CControlCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 56) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
}
