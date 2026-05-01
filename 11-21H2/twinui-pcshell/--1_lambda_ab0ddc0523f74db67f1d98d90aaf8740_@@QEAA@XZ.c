/*
 * XREFs of ??1_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEAA@XZ @ 0x1805E09F4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::subscribe_to_services_::_1_::dtor$37 @ 0x18021D4D5 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--subscribe__ea_18021D4D5.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::subscribe_to_services_::_1_::dtor$50 @ 0x18021D4E7 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--subscribe__ea_18021D4E7.c)
 *     _winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::subscribe_to_services_::_1_::dtor$10 @ 0x1802229CA (_winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--subscribe__ea_1802229CA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

void __fastcall _lambda_ab0ddc0523f74db67f1d98d90aaf8740_::~_lambda_ab0ddc0523f74db67f1d98d90aaf8740_(
        _lambda_ab0ddc0523f74db67f1d98d90aaf8740_ *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 8);
  if ( *v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v1);
}
