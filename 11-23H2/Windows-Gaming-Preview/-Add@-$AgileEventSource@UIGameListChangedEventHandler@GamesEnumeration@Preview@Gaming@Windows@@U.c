/*
 * XREFs of ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180020E74
 * Callers:
 *     ?add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001F510 (-add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 *     ?add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001F6A0 (-add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ?AddInternal@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002119C (-AddInternal@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x180021D3C (--$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v9 = 0LL;
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
         a2,
         &v9);
  v8 = v9;
  if ( v7 >= 0 )
  {
    if ( v9 )
    {
      v7 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v9,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
      v8 = v9;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  if ( v8 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
