/*
 * XREFs of ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803BCF9C
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803BD7D0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0II@@std@@YA_K_K@Z @ 0x18031AF10 (--$_Get_size_of_n@$0II@@std@@YA_K_K@Z.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1803BC72C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803BD1A0 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x1803BE3F8 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rsi
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
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v12);
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
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v16, v15, v11, a1, v18, v11, v12);
    }
    else
    {
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v16, a2, v11, a1, v18, v11, v12);
      v24 = (__int64)v11;
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(a2, a1[1], v12 + 136, a1, v20, v22, v23);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v24, v19);
    std::_Deallocate<16,0>(v21, 136 * v6);
    throw;
  }
  std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v11, v7, v6);
  return v12;
}
