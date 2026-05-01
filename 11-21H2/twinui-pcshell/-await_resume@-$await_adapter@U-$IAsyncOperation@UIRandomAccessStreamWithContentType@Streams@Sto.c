/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x18001AC64
 * Callers:
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x18001AC14 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 * Callees:
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamWithContentType@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x18001AC90 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRando_ea_18001AC90.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
        __int64 a1,
        __int64 a2)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::GetResults(*(_QWORD *)(a1 + 8));
  return a2;
}
