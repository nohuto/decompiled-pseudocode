/*
 * XREFs of _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001F2AC
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x180022070 (Windows--Internal--COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800183A8 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001F84C (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@Shim@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001FB08 (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=61
__int64 __fastcall lambda_c7e28edb760347053732171cef665d5d_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  bool v7; // si
  bool v8; // al
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  int GameConfigStoreClientIfNeeded; // eax
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v19; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-69h] BYREF
  __int64 v25; // [rsp+28h] [rbp-61h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v26; // [rsp+30h] [rbp-59h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v27; // [rsp+38h] [rbp-51h] BYREF
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-41h] BYREF
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v31; // [rsp+58h] [rbp-31h] BYREF
  __int128 v32; // [rsp+60h] [rbp-29h] BYREF
  HSTRING_HEADER v33; // [rsp+70h] [rbp-19h] BYREF
  HSTRING v34; // [rsp+88h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v30 = 0LL;
  v29 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v30);
  v5 = v4;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v29), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_48;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v6 < 0 )
    goto LABEL_54;
  v31 = 0LL;
  v27 = 0LL;
  v7 = (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v30 + 48LL))(
         v30,
         string,
         &v31) >= 0;
  v8 = (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v29 + 48LL))(
         v29,
         string,
         &v27) >= 0;
  if ( !v7 || !v8 )
  {
    v26 = 0LL;
    if ( v7 || v8 )
    {
      v9 = v27;
      if ( v7 )
        v9 = v31;
      v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
              (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)a1[2],
              v9,
              &v26);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x213,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v10);
LABEL_41:
        if ( v26 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v26);
        goto LABEL_43;
      }
    }
    v34 = 0LL;
    v11 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v33, &v34);
    if ( v11 >= 0 )
    {
      v28 = 0LL;
      v25 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v34, &v28);
      v5 = v12;
      if ( v12 >= 0
        && (v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, v34, &v25),
            v5 = v12,
            v12 >= 0) )
      {
        v32 = 0LL;
        GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((__int64 *)&v32);
        v5 = GameConfigStoreClientIfNeeded;
        if ( GameConfigStoreClientIfNeeded < 0
          || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56LL))(v28, &v24) >= 0
          && v24
          && (GameConfigStoreClientIfNeeded = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                                                a1[2],
                                                v28,
                                                &v26,
                                                &v32),
              v5 = GameConfigStoreClientIfNeeded,
              GameConfigStoreClientIfNeeded < 0)
          || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v24) >= 0
          && v24
          && (GameConfigStoreClientIfNeeded = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                                                a1[2],
                                                v25,
                                                &v26,
                                                &v32),
              v5 = GameConfigStoreClientIfNeeded,
              GameConfigStoreClientIfNeeded < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x213,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)GameConfigStoreClientIfNeeded);
        }
        else
        {
          v14 = (__int64 *)(a2 + 16);
          v15 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 16) = 0LL;
          v16 = 0LL;
          if ( v15 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            v16 = *v14;
          }
          if ( v26 )
          {
            if ( v16 )
            {
              *v14 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v26, a2 + 16);
          }
          else
          {
            *v14 = 0LL;
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v5 = 0;
        }
        std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v32);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x213,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v12);
      }
      v17 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v34 = 0LL;
      goto LABEL_41;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
LABEL_54:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x18001F7D0LL);
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x213,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)0x80070057LL);
LABEL_43:
  v19 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  string = 0LL;
LABEL_48:
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v5;
}
