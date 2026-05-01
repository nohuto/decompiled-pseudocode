/*
 * XREFs of ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1807231A4
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DACA4 (--$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@-$root_imp.c)
 *     ??$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@0@Z @ 0x180187F5C (--$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSys.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x18070E68C (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_18070E68C.c)
 *     ?TimeOutInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BLA@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@45@@Z @ 0x1807192FC (-TimeOutInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA-AU-$factory_event_rev.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTimeOutInfoChangedEvent(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  winrt::Windows::Foundation::IUnknown *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  const char *v9; // r9
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::get_weak<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>(
      (volatile signed __int64 *)this,
      &v15);
    v2 = v15;
    v15 = 0LL;
    v14 = v2;
    v16 = &v14;
    v3 = operator new(0x18uLL);
    v4 = v14;
    v14 = 0LL;
    v3[1] = v4;
    v5 = 1LL;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_DWORD *)v3 + 4) = 1;
    *v3 = off_1807CB5F8;
    v16 = v3;
    if ( v14 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
    v6 = winrt::Windows::Internal::Shell::RemoteSystemDataModel::TimeOutInfoChanged(
           (winrt::Windows::Foundation::IUnknown *)v12,
           v5,
           &v16);
    v7 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    v10 = v7;
    v11 = *((_QWORD *)v6 + 1);
    std::swap<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,0>(
      (winrt::Windows::Foundation::IUnknown *)&v10,
      (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((char *)this + 232));
    v8 = v11;
    v11 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = v8;
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BLA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v10);
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BLA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)v12);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    if ( v15 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3D1,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v9);
  }
}
