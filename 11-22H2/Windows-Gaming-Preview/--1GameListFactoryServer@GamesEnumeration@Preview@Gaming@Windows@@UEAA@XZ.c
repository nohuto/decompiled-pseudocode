/*
 * XREFs of ??1GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18001DC2C
 * Callers:
 *     ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001DBF0 (--_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002AA80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::~GameListFactoryServer(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `IActivationFactory'};
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>>'};
  *((_QWORD *)this + 5) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>>'};
  *((_QWORD *)this + 7) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  if ( *((_QWORD *)this + 12) )
    CoDecrementMTAUsage();
  if ( *((_QWORD *)this + 13) )
  {
    *((_QWORD *)this + 13) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release();
  }
  *((_DWORD *)this + 17) = -1073741823;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
