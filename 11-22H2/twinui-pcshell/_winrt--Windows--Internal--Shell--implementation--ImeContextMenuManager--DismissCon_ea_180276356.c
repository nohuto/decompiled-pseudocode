/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1_::_1_::catch$7 @ 0x180276356
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x18022B7C0 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__ResumeCoro_1_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 80) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
}
