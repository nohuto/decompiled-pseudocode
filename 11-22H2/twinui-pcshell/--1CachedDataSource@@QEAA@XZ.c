/*
 * XREFs of ??1CachedDataSource@@QEAA@XZ @ 0x180762BD0
 * Callers:
 *     ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1801BF460 (--1-$unique_ptr@VCachedDataSource@@U-$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCachedDataSource@@@std@@$0A@@?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1807619DC (--$-4U-$default_delete@VCachedDataSource@@@std@@$0A@@-$unique_ptr@VCachedDataSource@@U-$default_.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180078210 (--1-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall CachedDataSource::~CachedDataSource(CachedDataSource *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (CachedDataSource *)((char *)this + 48);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CachedDataSource *)((char *)this + 40));
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CachedDataSource *)((char *)this + 32));
  __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
