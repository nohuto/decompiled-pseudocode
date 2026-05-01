/*
 * XREFs of ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180058E50
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180058D14 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180059164 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18021ACC0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1806AB1EC (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::Completed(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 48LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
