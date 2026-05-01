/*
 * XREFs of winrt::com_ptr__anonymous_namespace_::ShellExecuteSite_::_com_ptr__anonymous_namespace_::ShellExecuteSite_ @ 0x1806C2000
 * Callers:
 *     _Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed_::_1_::dtor$0 @ 0x1806C2672 (_Utils--ProtocolLauncher--LaunchAppWithProgIdAndUriWithOpenWithSuppressed_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::com_ptr__anonymous_namespace_::ShellExecuteSite_::_com_ptr__anonymous_namespace_::ShellExecuteSite_(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
