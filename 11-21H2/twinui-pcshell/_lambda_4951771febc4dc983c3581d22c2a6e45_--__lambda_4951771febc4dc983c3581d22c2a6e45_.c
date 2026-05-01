/*
 * XREFs of _lambda_4951771febc4dc983c3581d22c2a6e45_::__lambda_4951771febc4dc983c3581d22c2a6e45_ @ 0x1805C05E8
 * Callers:
 *     _winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45____::_1_::dtor$0 @ 0x1805BEAAF (_winrt--Windows--Foundation--AsyncOperationProgressHandler_winrt--Windows--Internal--Shell--Meet.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

__int64 __fastcall lambda_4951771febc4dc983c3581d22c2a6e45_::__lambda_4951771febc4dc983c3581d22c2a6e45_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a1);
  return result;
}
