/*
 * XREFs of ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x18003E050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_e58599acbd90c5b132e1494e473a22d4_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_e58599acbd90c5b132e1494e473a22d4_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18003E114 (--$InvokeDelegates@V_lambda_e58599acbd90c5b132e1494e473a22d4_@@UIGameListChangedEventHandler@Gam.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::Invoke(
        RTL_SRWLOCK *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *a2)
{
  volatile signed __int32 **v2; // r14
  int v3; // edi
  volatile signed __int32 *v4; // rbx
  RTL_SRWLOCK *v5; // rsi
  signed __int32 v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)&this[4];
  v9 = a2;
  v3 = 0;
  v4 = 0LL;
  v5 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  if ( *v2 )
  {
    v4 = *v2;
    do
      v6 = *((_DWORD *)v4 + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(v4 + 3, v6 + 1, v6) );
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
  {
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_e58599acbd90c5b132e1494e473a22d4_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
           &v9,
           v4,
           v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
