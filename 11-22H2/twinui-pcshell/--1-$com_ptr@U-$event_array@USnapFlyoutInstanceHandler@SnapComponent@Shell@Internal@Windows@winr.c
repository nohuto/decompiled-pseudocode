/*
 * XREFs of ??1?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x18067993C
 * Callers:
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::add_::_1_::dtor$0 @ 0x18067DA06 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--add_--.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::remove_::_1_::dtor$0 @ 0x18067E62A (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--remove.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::remove_::_1_::dtor$2 @ 0x18067E642 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHan_ea_18067E642.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_::operator()_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__::_1_::dtor$0 @ 0x18068CEC8 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_--operat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18067EB20 (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@She.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref();
  return result;
}
