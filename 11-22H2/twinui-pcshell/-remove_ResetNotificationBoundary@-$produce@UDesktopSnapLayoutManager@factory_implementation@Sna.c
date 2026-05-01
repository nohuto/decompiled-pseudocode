/*
 * XREFs of ?remove_ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180686870
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1806866B8 (-remove@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@w.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>::remove_ResetNotificationBoundary(
        unsigned int *a1,
        void *a2)
{
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::remove(a1, a2);
  return 0LL;
}
