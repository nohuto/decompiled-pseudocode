/*
 * XREFs of ??1_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@QEAA@XZ @ 0x180700B0C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::subscribe_to_services_::_1_::dtor$17 @ 0x1802C5AFA (_winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--subscribe__ea_1802C5AFA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void __fastcall _lambda_9d145c474c1ca3988ea2d0119a9f5c39_::~_lambda_9d145c474c1ca3988ea2d0119a9f5c39_(
        _lambda_9d145c474c1ca3988ea2d0119a9f5c39_ *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 8);
  if ( *v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
}
