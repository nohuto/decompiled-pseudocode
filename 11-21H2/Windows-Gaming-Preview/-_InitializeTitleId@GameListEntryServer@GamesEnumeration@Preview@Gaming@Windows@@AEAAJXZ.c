/*
 * XREFs of ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BF98
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B07C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B278 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002E5D4 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rax
  __int128 v4; // xmm6
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v6; // ebx
  int GamesListProperties; // eax
  __int64 v8; // rdx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v9; // rbx
  __int64 (__fastcall *v10)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, char *); // rsi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v11; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v13; // rcx
  int v14[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v16; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+68h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v17 = v2;
  v3 = *((_QWORD *)this + 34);
  if ( !v3 || !*((_QWORD *)this + 35) )
  {
    v16 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            &v16);
    v6 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      v9 = v16;
      v10 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, char *))(*(_QWORD *)v16 + 64LL);
      WindowsDeleteString(*((HSTRING *)this + 19));
      *((_QWORD *)this + 19) = 0LL;
      GamesListProperties = v10(v9, (char *)this + 152);
      v6 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        goto LABEL_19;
      }
      v8 = 415LL;
    }
    else
    {
      v8 = 414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v3 + 88) )
    v4 = *(_OWORD *)(**(_QWORD **)(v3 + 80) + 32LL);
  else
    v4 = xmmword_180058B38;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  *(_OWORD *)v14 = v4;
  StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                        *((__int64 **)this + 35),
                                        (__int128 *)v14,
                                        15LL,
                                        (HSTRING *)this + 19);
  v6 = StringPropertyFromGameConfigStore;
  if ( StringPropertyFromGameConfigStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_14:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
LABEL_19:
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
