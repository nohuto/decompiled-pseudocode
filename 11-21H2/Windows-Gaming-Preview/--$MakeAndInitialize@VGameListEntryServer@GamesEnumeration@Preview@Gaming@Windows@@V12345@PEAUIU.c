/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9UnifiedTile@Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x1800210A8
 * Callers:
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@Shim@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001FB08 (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000FB44 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B07C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *>(
        volatile signed __int64 **a1,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **a2,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **a3,
        _QWORD *a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v8; // rax
  int v9; // esi
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  signed __int32 v14; // eax

  *a1 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0x130uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v8);
    v9 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
           (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v10,
           *a2,
           *a3,
           (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL)));
    if ( v9 >= 0 )
    {
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 17);
        if ( v11 < 0 )
        {
          do
LABEL_11:
            v14 = *(_DWORD *)(2 * v11 + 0x10);
          while ( v14 != 0x7FFFFFFF
               && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v11 + 16), v14 + 1, v14) );
        }
        else
        {
          while ( (_DWORD)v11 != 0x7FFFFFFF )
          {
            v13 = _InterlockedCompareExchange64(v10 + 17, v11 + 1, v11);
            v12 = v11 == v13;
            v11 = v13;
            if ( v12 )
              break;
            if ( v13 < 0 )
              goto LABEL_11;
          }
        }
      }
      *a1 = v10;
      v9 = 0;
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
