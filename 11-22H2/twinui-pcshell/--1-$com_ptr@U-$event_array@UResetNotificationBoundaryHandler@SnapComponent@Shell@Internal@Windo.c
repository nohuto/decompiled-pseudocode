/*
 * XREFs of ??1?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801BEB80
 * Callers:
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::add_::_1_::dtor$0 @ 0x1802C6050 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoundaryHandler_-.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::operator()_winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager__::_1_::dtor$0 @ 0x180680F43 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoun_ea_180680F43.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::remove_::_1_::dtor$0 @ 0x18068683E (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoun_ea_18068683E.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::remove_::_1_::dtor$2 @ 0x180686856 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoun_ea_180686856.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(a1);
  return result;
}
