/*
 * XREFs of ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18071D178
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$10 @ 0x18072D57B (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_18072D57B.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$23 @ 0x18072D5F0 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_18072D5F0.c)
 *     _winrt::Windows::Internal::Shell::implementation::ProviderActivator::Activate_::_1_::dtor$2 @ 0x180734DDE (_winrt--Windows--Internal--Shell--implementation--ProviderActivator--Activate_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(
        __int64 *a1)
{
  __int64 result; // rax

  result = winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke(a1);
  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  return result;
}
