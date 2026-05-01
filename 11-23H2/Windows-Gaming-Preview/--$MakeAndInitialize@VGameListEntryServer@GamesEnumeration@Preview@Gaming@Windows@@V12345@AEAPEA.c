/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@5678@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D8B4
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AFB4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 * Callees:
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000FD0C (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B9C0 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile * &,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
        volatile signed __int64 **a1,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **a2,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **a3,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler **a4)
{
  volatile signed __int64 *v8; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v9; // rax
  int v10; // esi
  volatile signed __int64 *v11; // rdi
  signed __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  signed __int32 v15; // eax

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v8);
  }
  *a1 = 0LL;
  v9 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0x130uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v9);
    v10 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v11,
            *a2,
            *a3,
            *a4);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 17);
        if ( v12 < 0 )
        {
          do
LABEL_16:
            v15 = *(_DWORD *)(2 * v12 + 0x10);
          while ( v15 != 0x7FFFFFFF
               && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v12 + 16), v15 + 1, v15) );
        }
        else
        {
          while ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v14 = _InterlockedCompareExchange64(v11 + 17, v12 + 1, v12);
            v13 = v12 == v14;
            v12 = v14;
            if ( v13 )
              break;
            if ( v14 < 0 )
              goto LABEL_16;
          }
        }
      }
      *a1 = v11;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v11);
      return 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v11);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
