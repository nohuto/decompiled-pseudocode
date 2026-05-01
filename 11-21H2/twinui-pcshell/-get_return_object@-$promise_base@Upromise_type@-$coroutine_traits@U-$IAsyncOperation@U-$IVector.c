/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18003C880
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$2 @ 0x1801B82DC (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$2 @ 0x1801B8BD0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8BD0.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$2 @ 0x1801B9034 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B9034.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x1801B94A4 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B94A4.c)
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1801BA9BC (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage-.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$2 @ 0x1801BD8DC (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_InitCoro$2 @ 0x1801D5CE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_InitC.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x1801D8AE8 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>::get_return_object(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  *(_QWORD *)a2 = a1 + 16;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
