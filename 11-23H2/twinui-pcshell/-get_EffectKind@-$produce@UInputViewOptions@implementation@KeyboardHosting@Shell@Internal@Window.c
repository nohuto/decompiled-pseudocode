/*
 * XREFs of ?get_EffectKind@?$produce@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@4567@@impl@winrt@@UEAAHPEAH@Z @ 0x18052EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::get_EffectKind(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 40LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
