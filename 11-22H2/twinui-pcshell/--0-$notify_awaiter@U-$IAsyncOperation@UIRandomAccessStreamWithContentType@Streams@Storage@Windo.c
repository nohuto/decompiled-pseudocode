/*
 * XREFs of ??0?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x1802DF0F4
 * Callers:
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x18022F9C4 (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@Upromise_type.c)
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x1802E74FC (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@_ea_1802E74FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  if ( a3 )
  {
    *(_QWORD *)a1 = a3;
    a3[1] = a1;
    *a3 = _lambda_f8e2cc796e8b9f8a5408b0712580aa8d_::_lambda_invoker_cdecl_;
  }
  return a1;
}
