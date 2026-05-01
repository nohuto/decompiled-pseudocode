/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAAEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18031A88C
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031C250 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<ParsedTaskbarLayout>::_Emplace_back_with_unused_capacity<ParsedTaskbarLayout>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = *(_QWORD **)(a1 + 8);
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  v7[3] = 0LL;
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[3] = 0LL;
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v7);
  *v7 = v4;
  v7[1] = v5;
  v7[3] = v5;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v7 + 4),
    (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 4));
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 136;
  return result;
}
