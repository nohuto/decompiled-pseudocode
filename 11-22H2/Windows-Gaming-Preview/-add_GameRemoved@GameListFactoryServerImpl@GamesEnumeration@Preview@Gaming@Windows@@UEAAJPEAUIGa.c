/*
 * XREFs of ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001F590
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001DF20 (-add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameLi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180021024 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$CreateAgileHelper@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x180021B08 (--$CreateAgileHelper@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::add_GameRemoved(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler *a2,
        struct EventRegistrationToken *a3)
{
  char *v5; // rbp
  int v6; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char *)this + 104;
  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = 0LL;
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
         a2,
         &v10);
  v7 = v10;
  if ( v6 >= 0 )
  {
    if ( v10 )
    {
      v6 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             v5,
             v10,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
      v7 = v10;
    }
    else
    {
      v6 = -2147024809;
    }
  }
  if ( v7 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 < 0 )
    goto LABEL_10;
  return (unsigned int)v6;
}
