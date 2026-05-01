/*
 * XREFs of _lambda_df68147c6dfee85e97755cbe2cb862f5_::__lambda_df68147c6dfee85e97755cbe2cb862f5_ @ 0x1805BCB2C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::publish_services_::_1_::dtor$13 @ 0x180222A90 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--publish_service_ea_180222A90.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::publish_services_::_1_::dtor$26 @ 0x180222AA2 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--publish_service_ea_180222AA2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

__int64 __fastcall lambda_df68147c6dfee85e97755cbe2cb862f5_::__lambda_df68147c6dfee85e97755cbe2cb862f5_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v1);
  return result;
}
