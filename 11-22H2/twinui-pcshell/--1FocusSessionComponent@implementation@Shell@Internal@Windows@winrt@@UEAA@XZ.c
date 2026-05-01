/*
 * XREFs of ??1FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180391878
 * Callers:
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent_::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent__::_1_::dtor$0 @ 0x1802B538B (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--implementation--FocusSessio.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::~FocusSessionComponent(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *)((char *)this + 96);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
