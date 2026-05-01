/*
 * XREFs of ??4?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180187DAC
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180187E04 (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_180187E04.c)
 *     ??$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@0@Z @ 0x180187F5C (--$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSys.c)
 */

__int64 __fastcall __4__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v7 = a2[1];
  std::swap<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,0>(&v6, a1);
  v4 = v7;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
