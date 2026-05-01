/*
 * XREFs of ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA?A_T$$QEAUParsedTaskbarLayout@@@Z @ 0x1803E94FC
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803EA6F0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E91F4 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803E96B4 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  char *result; // rax

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
    return std::vector<ParsedTaskbarLayout>::_Emplace_reallocate<ParsedTaskbarLayout>(a1, a1[1], a2);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[3] = 0LL;
  v5 = *a2;
  v6 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[3] = 0LL;
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v4);
  *v4 = v5;
  v4[1] = v6;
  v4[3] = v6;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v4 + 4),
    (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 4));
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 136);
  return result;
}
