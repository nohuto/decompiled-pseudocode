/*
 * XREFs of ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@QEAAX$$QEAUIRandomAccessStream@Streams@Storage@Windows@winrt@@@Z @ 0x18071C814
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::return_value(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  return winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 96), a2);
}
