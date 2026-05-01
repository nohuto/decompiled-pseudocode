/*
 * XREFs of ?QueryInterface@?$produce_base@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017F560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::query_interface(
           (volatile signed __int64 *)((a1 - 16) & -(__int64)(a1 != 0)),
           a2,
           a3);
}
