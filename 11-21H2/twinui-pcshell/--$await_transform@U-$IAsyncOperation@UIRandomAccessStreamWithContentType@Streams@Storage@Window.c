/*
 * XREFs of ??$await_transform@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@12@$$QEAU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18056BC04
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x1801B8D00 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8D00.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x1801B9170 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B9170.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BDA00 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1801D6870 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_Resum.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??0?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x18049A14C (--0-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windo.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
    a2,
    a3,
    (_QWORD *)((a1 + 72) & -(__int64)(*(_BYTE *)(a1 + 93) != 0)));
  return v3;
}
