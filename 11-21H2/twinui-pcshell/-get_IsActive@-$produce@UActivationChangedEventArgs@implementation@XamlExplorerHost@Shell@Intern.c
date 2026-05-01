/*
 * XREFs of ?get_IsActive@?$produce@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationChangedEventArgs@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180043520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::get_IsActive(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
