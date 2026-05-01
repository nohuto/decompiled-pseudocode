/*
 * XREFs of ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x180496488
 * Callers:
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x180495CBC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x1803E9F08 (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18049568C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 **__fastcall ParsedPenWorkspaceLayout::operator=(__int64 **a1, __int64 **a2)
{
  void *v4; // r8
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx

  if ( a1 != a2 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a1);
    v5 = *a2;
    v6 = (__int64)&(*a2)[(_QWORD)a2[1]];
    while ( v5 != (__int64 *)v6 )
    {
      v7 = a1[1];
      if ( v7 != a1[3]
        || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   (__int64)a1,
                   (unsigned __int64)v7 + 1,
                   v4),
            v7 = a1[1],
            v8 >= 0) )
      {
        v9 = (__int64 *)((char *)v7 + 1);
        v10 = (__int64)(*a1 - 1);
        a1[1] = v9;
        v11 = (__int64 *)(v10 + 8LL * (_QWORD)v9);
        if ( v11 )
        {
          *v11 = *v5;
          Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef(v11);
        }
      }
      ++v5;
    }
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
      (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a1 + 4),
      (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 4));
  }
  return a1;
}
