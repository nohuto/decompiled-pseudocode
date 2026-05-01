/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@I@Foundation@Windows@3@@Z @ 0x1801B420C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_18e193a120501d561f2c233ed8e0f717_@@CAXPEAX@Z @ 0x180499DD0 (-_lambda_invoker_cdecl_@_lambda_18e193a120501d561f2c233ed8e0f717_@@CAXPEAX@Z.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::cancel_asynchronously$_InitCoro$2 @ 0x1801B3F90 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage--.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::cancel_asynchronously(
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *this)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+148h] [rbp+10h] BYREF
  int v6; // [rsp+150h] [rbp+18h] BYREF

  v2 = operator new(0x109uLL);
  v6 = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::cancel_asynchronously__InitCoro_2(
    (__int64)&v5,
    (__int64)&v6,
    (__int64)v2,
    (__int64)this);
  v3 = v5;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(this);
  return v3;
}
