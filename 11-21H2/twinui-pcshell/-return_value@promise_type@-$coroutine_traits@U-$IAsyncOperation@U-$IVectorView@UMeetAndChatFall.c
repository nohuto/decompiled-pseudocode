/*
 * XREFs of ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@QEAAX$$QEAU?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1805D67B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type::return_value(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  return winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 96), a2);
}
