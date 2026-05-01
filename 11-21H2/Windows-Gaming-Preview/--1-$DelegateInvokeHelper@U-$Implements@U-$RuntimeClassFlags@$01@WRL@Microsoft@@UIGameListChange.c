/*
 * XREFs of ??1?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b443b47690db9320d23fa8a69834bd81_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAA@XZ @ 0x180022A6C
 * Callers:
 *     ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b443b47690db9320d23fa8a69834bd81_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180022A30 (--_G-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChang.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::*)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b443b47690db9320d23fa8a69834bd81_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>::~DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b443b47690db9320d23fa8a69834bd81_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 60) = -1073741823;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
