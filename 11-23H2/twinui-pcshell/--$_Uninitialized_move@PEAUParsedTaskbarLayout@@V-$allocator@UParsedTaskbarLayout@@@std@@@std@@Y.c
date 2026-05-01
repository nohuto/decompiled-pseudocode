/*
 * XREFs of ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1803E9424
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E91F4 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1803E8DFC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803E96B4 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Uninitialized_move<ParsedTaskbarLayout *>(__int64 *a1, __int64 *a2, _QWORD *a3)
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
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)a3);
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
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>((__int64)a3, (__int64)a3);
  return a3;
}
