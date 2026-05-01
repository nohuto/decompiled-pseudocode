/*
 * XREFs of winrt::com_ptr__anonymous_namespace_::ShellExecuteSite_::_com_ptr__anonymous_namespace_::ShellExecuteSite_ @ 0x1805D0374
 * Callers:
 *     _Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed_::_1_::dtor$0 @ 0x1805D0C8A (_Utils--ProtocolLauncher--LaunchAppWithProgIdAndUriWithOpenWithSuppressed_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

__int64 __fastcall winrt::com_ptr__anonymous_namespace_::ShellExecuteSite_::_com_ptr__anonymous_namespace_::ShellExecuteSite_(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a1);
  return result;
}
