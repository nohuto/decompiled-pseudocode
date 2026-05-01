/*
 * XREFs of ?add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001EFB0
 * Callers:
 *     ?add_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001D870 (-add_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameLi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18002078C (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::add_GameUpdated(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *a2,
        struct EventRegistrationToken *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 16);
  if ( !v3 )
  {
    v4 = -2147467261;
    v5 = 442LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v4);
    return v4;
  }
  v6 = Microsoft::WRL::AgileEventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         v3 + 40,
         a2,
         a3);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
      (const char *)(unsigned int)v6);
    v5 = 443LL;
    goto LABEL_5;
  }
  return v4;
}
