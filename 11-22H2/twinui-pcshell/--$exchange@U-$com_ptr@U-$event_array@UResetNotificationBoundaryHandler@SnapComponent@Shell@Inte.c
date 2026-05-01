/*
 * XREFs of ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18018EF70
 * Callers:
 *     ?add@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18018EE5C (-add@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winr.c)
 *     ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1806866B8 (-remove@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@w.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801115DC (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 */

_QWORD *__fastcall std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax

  v3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
  *(_QWORD *)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary = 0LL;
  *a1 = v3;
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    (__int64 *)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary,
    a3);
  return a1;
}
