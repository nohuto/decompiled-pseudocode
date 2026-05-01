/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b443b47690db9320d23fa8a69834bd81_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180023250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b443b47690db9320d23fa8a69834bd81_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAA@XZ @ 0x18002328C (--1-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChange.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::*)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b443b47690db9320d23fa8a69834bd81_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::*)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b443b47690db9320d23fa8a69834bd81_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>::~DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b443b47690db9320d23fa8a69834bd81_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
