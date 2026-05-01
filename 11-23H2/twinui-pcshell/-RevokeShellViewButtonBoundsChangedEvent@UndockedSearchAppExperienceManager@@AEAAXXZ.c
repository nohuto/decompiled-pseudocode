/*
 * XREFs of ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18012BDA4
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800E42DC (-ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046B3A4 (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(
        UndockedSearchAppExperienceManager *this)
{
  if ( *((_QWORD *)this + 110) )
    _revoke___event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAAXXZ();
}
