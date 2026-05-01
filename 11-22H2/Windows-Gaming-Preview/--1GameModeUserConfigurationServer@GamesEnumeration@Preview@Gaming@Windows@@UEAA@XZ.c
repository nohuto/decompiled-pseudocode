/*
 * XREFs of ??1GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180042A2C
 * Callers:
 *     ??_EGameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800429F0 (--_EGameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::~GameModeUserConfigurationServer(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
    FreeGameConfigStoreClient(v2);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>((__int64)this);
}
