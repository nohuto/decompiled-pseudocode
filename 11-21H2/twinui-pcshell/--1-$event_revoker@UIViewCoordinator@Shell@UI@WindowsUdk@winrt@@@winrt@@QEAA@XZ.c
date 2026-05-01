/*
 * XREFs of ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18034CAE8
 * Callers:
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$18 @ 0x18021E5A5 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$18.c)
 * Callees:
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x18000ABE0 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::~event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>(
        __int64 *a1)
{
  winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(a1);
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
