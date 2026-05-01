/*
 * XREFs of ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0A88
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FE04 (-ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038FC10 (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?revoke@?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAXXZ @ 0x1801A312C (-revoke@-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayou.c)
 */

void __fastcall UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(
        UndockedSearchAppExperienceManager *this)
{
  if ( *((_QWORD *)this + 98) )
    _revoke___event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAAXXZ();
}
