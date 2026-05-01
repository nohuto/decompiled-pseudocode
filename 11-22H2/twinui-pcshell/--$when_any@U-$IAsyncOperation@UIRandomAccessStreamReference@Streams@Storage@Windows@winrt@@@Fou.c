/*
 * XREFs of ??$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@0@AEBU1230@0@Z @ 0x18021B020
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18021BA90 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18021AB94 (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage-.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::when_any<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+190h] [rbp+8h] BYREF

  v6 = operator new(0x141uLL);
  v8 = 0;
  winrt::when_any__InitCoro_2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___(
    &v8,
    (__int64)v6 + 112,
    a1,
    a2,
    a3);
  return a1;
}
