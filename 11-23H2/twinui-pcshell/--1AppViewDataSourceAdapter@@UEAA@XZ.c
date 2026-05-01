/*
 * XREFs of ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x180081E7C
 * Callers:
 *     ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x180081E40 (--_EAppViewDataSourceAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18007D2DC (--1-$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$.c)
 *     ??1?$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180081EE8 (--1-$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@-$abi@UIWindow.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall AppViewDataSourceAdapter::~AppViewDataSourceAdapter(AppViewDataSourceAdapter *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (AppViewDataSourceAdapter *)((char *)this + 248);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  __1__event_revoker_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt___MP8type___abi_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ((char *)this + 232);
  __1__event_revoker_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 27);
  if ( *((_QWORD *)this + 26) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((AppViewDataSourceAdapter *)((char *)this + 208));
  if ( *((_QWORD *)this + 25) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((AppViewDataSourceAdapter *)((char *)this + 200));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>(this);
}
