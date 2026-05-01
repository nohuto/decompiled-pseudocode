/*
 * XREFs of ??1?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180679958
 * Callers:
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_::add_::_1_::dtor$0 @ 0x18067DB6A (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceShownHandler_--a.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_::remove_::_1_::dtor$0 @ 0x18067E7D6 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceShownHandler_--r.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_::remove_::_1_::dtor$2 @ 0x18067E7EE (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceSho_ea_18067E7EE.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_::operator()_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_bool__::_1_::dtor$0 @ 0x18068CF9D (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceShownHandler_--o.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18067EB64 (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceShownHandler@SnapComponen.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>>::unconditional_release_ref();
  return result;
}
