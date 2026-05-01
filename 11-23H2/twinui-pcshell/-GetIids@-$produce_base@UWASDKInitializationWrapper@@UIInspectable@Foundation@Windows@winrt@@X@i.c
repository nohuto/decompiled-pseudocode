/*
 * XREFs of ?GetIids@?$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801F9E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable,void>::GetIids(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>::NonDelegatingGetIids((a1 - 16) & -(__int64)(a1 != 0));
}
