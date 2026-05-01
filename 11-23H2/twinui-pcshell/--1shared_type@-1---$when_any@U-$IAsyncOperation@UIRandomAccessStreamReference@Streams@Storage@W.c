/*
 * XREFs of ??1shared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@AEBU2341@0@Z@QEAA@XZ @ 0x18007071C
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18021ACC0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$2 @ 0x18021AF38 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Stora.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_CloseHandle @ 0x1801C7938 (WINRT_IMPL_CloseHandle.c)
 */

void __fastcall `winrt::when_any<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>'::`2'::shared_type::~shared_type(
        HANDLE *a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 2);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *a1 )
  {
    WINRT_IMPL_CloseHandle(*a1);
    *a1 = 0LL;
  }
}
