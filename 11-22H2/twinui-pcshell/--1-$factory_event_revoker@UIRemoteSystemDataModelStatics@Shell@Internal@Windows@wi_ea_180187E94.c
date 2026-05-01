/*
 * XREFs of ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180187E94
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??4?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180187E3C (--4-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_180187E3C.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$5 @ 0x1802BAA8C (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1802BAA8C.c)
 *     ??1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18071D3E4 (--1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??_9type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFI@AA @ 0x1802ACE50 (--_9type@-$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFI@A.c)
 */

void __fastcall __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Foundation::IUnknown *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v3);
     winrt::impl::abi<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,void>::type::`vcall'{88,{flat}}(
      v1,
      *((_QWORD *)this + 1));
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
