/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180023170
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180026B14 (-Get@-$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Inter.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v3; // r8d
  signed __int32 v5; // ecx
  int v6; // ebx
  __int64 v7; // rcx
  signed __int32 v9; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 120);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v3, -2);
  if ( v10 != 3 )
  {
    if ( v10 != 1 )
    {
      v6 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return (unsigned int)v6;
    }
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
                           a1 + 104,
                           a2);
  }
  v5 = *(_DWORD *)(a1 - 120);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v5, -2);
  if ( v11 == 3 )
  {
    _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 - 116), v9);
    v7 = *(_QWORD *)(a1 - 128);
    if ( v7 )
      SetRestrictedErrorInfo(v7);
    v6 = v9;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
                           a1 + 104,
                           a2);
  return (unsigned int)v6;
}
