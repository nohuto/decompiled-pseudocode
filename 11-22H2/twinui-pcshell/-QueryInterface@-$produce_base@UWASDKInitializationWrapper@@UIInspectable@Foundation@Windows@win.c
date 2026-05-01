/*
 * XREFs of ?QueryInterface@?$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801FA270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable>::query_interface(
           (a1 - 16) & -(__int64)(a1 != 0),
           a2,
           a3);
}
