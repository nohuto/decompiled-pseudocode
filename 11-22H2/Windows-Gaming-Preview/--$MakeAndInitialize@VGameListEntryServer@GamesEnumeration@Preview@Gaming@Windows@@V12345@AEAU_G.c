/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000DB68
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000BB30 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000FD0C (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002BBB8 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> &,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
        volatile signed __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  volatile signed __int64 *v6; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v7; // rax
  int v8; // esi
  volatile signed __int64 *v9; // rdi
  signed __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  signed __int32 v13; // eax

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v6);
  }
  *a1 = 0LL;
  v7 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0x130uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v7);
    v8 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
           (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v9,
           *a5);
    if ( v8 >= 0 )
    {
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 17);
        if ( v10 < 0 )
        {
          do
LABEL_16:
            v13 = *(_DWORD *)(2 * v10 + 0x10);
          while ( v13 != 0x7FFFFFFF
               && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v10 + 16), v13 + 1, v13) );
        }
        else
        {
          while ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v12 = _InterlockedCompareExchange64(v9 + 17, v10 + 1, v10);
            v11 = v10 == v12;
            v10 = v12;
            if ( v11 )
              break;
            if ( v12 < 0 )
              goto LABEL_16;
          }
        }
      }
      *a1 = v9;
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v9);
      return 0;
    }
    else if ( v9 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v9);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
