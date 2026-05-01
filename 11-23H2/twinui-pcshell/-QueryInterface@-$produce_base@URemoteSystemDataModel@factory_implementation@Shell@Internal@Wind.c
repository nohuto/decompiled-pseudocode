/*
 * XREFs of ?QueryInterface@?$produce_base@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180198B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,void>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::query_interface((a1 - 16) & -(__int64)(a1 != 0));
}
