/*
 * XREFs of ?get_SnapControlType@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAH@Z @ 0x18067E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::get_SnapControlType(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 356;
  if ( !a1 )
    v2 = 372LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
