/*
 * XREFs of ?remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001F020
 * Callers:
 *     ?remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001D890 (-remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800205D0 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::remove_GameUpdated(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct EventRegistrationToken a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
  {
    v3 = -2147467261;
    v4 = 452LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v3);
    return v3;
  }
  v5 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         v2 + 40,
         a2.value);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
      (const char *)(unsigned int)v5);
    v4 = 453LL;
    goto LABEL_5;
  }
  return v3;
}
