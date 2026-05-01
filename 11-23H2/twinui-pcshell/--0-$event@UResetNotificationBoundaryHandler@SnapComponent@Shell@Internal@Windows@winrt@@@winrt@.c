/*
 * XREFs of ??0?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C62EC
 * Callers:
 *     _dynamic_initializer_for__winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary__ @ 0x18000A840 (_dynamic_initializer_for__winrt--Windows--Internal--Shell--SnapComponent--implementation--Deskto.c)
 * Callees:
 *     <none>
 */

__int128 *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>()
{
  __int128 *result; // rax

  stru_18098F1A8.Ptr = 0LL;
  result = &winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary = 0LL;
  return result;
}
