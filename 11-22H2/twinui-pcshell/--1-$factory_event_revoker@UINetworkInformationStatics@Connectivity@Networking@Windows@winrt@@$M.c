/*
 * XREFs of ??1?$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$MP8type@?$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180734328
 * Callers:
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180283FE4 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180734384 (--1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??_9type@?$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@winrt@@$BGI@AA @ 0x1802ACF70 (--_9type@-$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@winrt@@.c)
 */

void __fastcall __1__factory_event_revoker_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt___MP8type___abi_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Foundation::IUnknown *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v3);
     winrt::impl::abi<winrt::Windows::Networking::Connectivity::INetworkInformationStatics,void>::type::`vcall'{104,{flat}}(v1);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
