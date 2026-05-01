/*
 * XREFs of _winrt::impl::make_scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____::_1_::dtor$0 @ 0x180212B86
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::make_scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(*(winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 **)(a2 + 80));
  }
}
