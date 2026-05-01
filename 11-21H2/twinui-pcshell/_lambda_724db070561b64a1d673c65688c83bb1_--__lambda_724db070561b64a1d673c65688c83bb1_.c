/*
 * XREFs of _lambda_724db070561b64a1d673c65688c83bb1_::__lambda_724db070561b64a1d673c65688c83bb1_ @ 0x1805C0604
 * Callers:
 *     _winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1____::_1_::dtor$0 @ 0x1805BEBA6 (_winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Wind_ea_1805BEBA6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805C093C (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_724db070561b64a1d673c65688c83bb1_::__lambda_724db070561b64a1d673c65688c83bb1_(__int64 *a1)
{
  MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a1);
}
