/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_IAsyncOperation_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::StorageFile__winrt::Windows::Storage::StorageFile_::GetResults_::_1_::dtor$0 @ 0x180572E0E
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::StorageFile__winrt::Windows::Storage::StorageFile_::GetResults_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(*(winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 **)(a2 + 72));
  }
}
