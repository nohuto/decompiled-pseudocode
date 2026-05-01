/*
 * XREFs of ?get_NewForeground@?$produce@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationChangedEventArgs@34567@@impl@winrt@@UEAAHPEA_K@Z @ 0x180072B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::get_NewForeground(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
