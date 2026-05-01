/*
 * XREFs of ?QueryInterface@?$produce_base@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Foundation::IActivationFactory,void>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::static_lifetime>::query_interface(
           (volatile signed __int64 *)((a1 - 16) & -(__int64)(a1 != 0)),
           a2,
           a3);
}
