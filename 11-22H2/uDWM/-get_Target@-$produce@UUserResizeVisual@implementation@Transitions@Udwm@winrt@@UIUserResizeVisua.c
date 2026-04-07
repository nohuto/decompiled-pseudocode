/*
 * XREFs of ?get_Target@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAH@Z @ 0x1801050D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::get_Target(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 80;
  if ( !a1 )
    v2 = 88LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
