/*
 * XREFs of ??1?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1805AE794
 * Callers:
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::add_::_1_::dtor$0 @ 0x1805B1556 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--add_--.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::remove_::_1_::dtor$0 @ 0x1805B21F6 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--remove.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::remove_::_1_::dtor$2 @ 0x1805B220E (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHan_ea_1805B220E.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::operator()_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__::_1_::dtor$0 @ 0x1805B7018 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--operat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1805B253C (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@She.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref();
  return result;
}
