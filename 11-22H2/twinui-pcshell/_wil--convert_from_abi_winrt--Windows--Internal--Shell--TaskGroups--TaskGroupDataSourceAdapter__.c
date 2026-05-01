/*
 * XREFs of _wil::convert_from_abi_winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter__::_1_::dtor$0 @ 0x1802C302F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 */

void __fastcall wil::convert_from_abi_winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 64));
  }
}
