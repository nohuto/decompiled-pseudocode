/*
 * XREFs of ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803BD1A0
 * Callers:
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803BCF9C (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 * Callees:
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1803BC72C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803BCF58 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    do
    {
      *a3 = 0LL;
      a3[1] = 0LL;
      a3[2] = 0LL;
      a3[3] = 0LL;
      v6 = *(v5 - 1);
      v7 = *v5;
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      v5[2] = 0LL;
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a3);
      *a3 = v6;
      a3[1] = v7;
      a3[3] = v7;
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
        (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a3 + 4),
        (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v5 + 3));
      a3 += 17;
      v5 += 17;
    }
    while ( v5 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>((__int64)a3, (__int64)a3);
  return a3;
}
