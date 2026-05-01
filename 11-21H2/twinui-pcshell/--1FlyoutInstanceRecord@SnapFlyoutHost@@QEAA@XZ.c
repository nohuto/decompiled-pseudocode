/*
 * XREFs of ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1805AEB10
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x1801BFD01 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_--_1_--dtor$10.c)
 *     ?_Destroy@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@EEAAXXZ @ 0x1805B1400 (-_Destroy@-$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE870 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE8D0 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE8D0.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805AE930 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE930.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE990 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE990.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE9F0 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE9F0.c)
 */

void __fastcall SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(SnapFlyoutHost::FlyoutInstanceRecord *this)
{
  std::_Ref_count_base *v2; // rcx

  __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 11);
  __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 9);
  __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ((__int64 *)this + 7);
  __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 5);
  __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 3);
  if ( *((_QWORD *)this + 2) )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile __int64 **)this + 2);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
