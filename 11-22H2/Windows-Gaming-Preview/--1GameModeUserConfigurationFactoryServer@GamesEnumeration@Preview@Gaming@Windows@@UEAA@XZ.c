/*
 * XREFs of ??1GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x1800425DC
 * Callers:
 *     ??_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800425A0 (--_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::~GameModeUserConfigurationFactoryServer(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable';
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>>'};
  *((_QWORD *)this + 5) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>>'};
  if ( *((_QWORD *)this + 12) )
    CoDecrementMTAUsage();
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *((_DWORD *)this + 17) = -1073741823;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
