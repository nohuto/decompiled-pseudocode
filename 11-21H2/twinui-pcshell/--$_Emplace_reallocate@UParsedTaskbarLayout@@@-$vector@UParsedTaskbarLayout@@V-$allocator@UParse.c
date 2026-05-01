/*
 * XREFs of ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031ACDC
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031C250 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$_Get_size_of_n@$0II@@std@@YA_K_K@Z @ 0x18031AF10 (--$_Get_size_of_n@$0II@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031AF3C (--$_Uninitialized_move@PEAUParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Y.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ?_Change_array@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAXQEAUParsedTaskbarLayout@@_K1@Z @ 0x18031CEDC (-_Change_array@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@AEA.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ParsedTaskbarLayout>::_Emplace_reallocate<ParsedTaskbarLayout>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t size_of; // rax
  char *v11; // r12
  char *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  void *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v4 = (a2 - *a1) / 136;
  v5 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[1] - *a1) >> 3);
  v6 = 0x1E1E1E1E1E1E1E1LL;
  if ( v5 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector too long");
  v7 = v5 + 1;
  v8 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x1E1E1E1E1E1E1E1LL - (v8 >> 1) )
  {
    v6 = v9 + v8;
    if ( v9 + v8 < v7 )
      v6 = v7;
  }
  size_of = std::_Get_size_of_n<136>(v6);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[136 * v4];
  v18 = v12 + 136;
  try
  {
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    v13 = *a3;
    v14 = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[3] = 0LL;
    CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v12);
    *(_QWORD *)v12 = v13;
    *((_QWORD *)v12 + 1) = v14;
    *((_QWORD *)v12 + 3) = v14;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
      (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v12 + 32),
      (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a3 + 4));
    v24 = (__int64)v12;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      std::_Uninitialized_move<ParsedTaskbarLayout *>(v16, v15, v11, a1, v18, v11, v12);
    }
    else
    {
      std::_Uninitialized_move<ParsedTaskbarLayout *>(v16, a2, v11, a1, v18, v11, v12);
      v24 = (__int64)v11;
      std::_Uninitialized_move<ParsedTaskbarLayout *>(a2, a1[1], v12 + 136, a1, v20, v22, v23);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v24, v19);
    std::_Deallocate<16,0>(v21, 136 * v6);
    throw;
  }
  std::vector<ParsedTaskbarLayout>::_Change_array(a1, v11, v7, v6);
  return v12;
}
