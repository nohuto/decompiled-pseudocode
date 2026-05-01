/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C78C
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B9C0 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002BBB8 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002DE74 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002E3F0 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BFCC (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002EE04 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  int GamesListProperties; // eax
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v8; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v14; // [rsp+38h] [rbp+10h] BYREF

  *((_DWORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 34) && *((_QWORD *)this + 35) )
  {
    *((_DWORD *)this + 36) = 1;
    return 0LL;
  }
  v14 = 0LL;
  GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                          this,
                          &v14);
  v3 = GamesListProperties;
  if ( GamesListProperties >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, unsigned int *))(*(_QWORD *)v14 + 48LL))(
           v14,
           &v13);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v7 = v13;
      if ( v13 <= 2 )
      {
        *((_DWORD *)this + 36) = v13;
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v10 + 16LL))(v10);
          v7 = *((_DWORD *)this + 36);
        }
        if ( !v7 )
        {
          v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(this);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              385LL,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v11);
        }
        return 0LL;
      }
      v3 = -2147418113;
      v4 = 2147549183LL;
      v5 = 377LL;
    }
    else
    {
      v4 = (unsigned int)v6;
      v5 = 376LL;
    }
  }
  else
  {
    v4 = (unsigned int)GamesListProperties;
    v5 = 373LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v4);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
