/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180541018
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180540D00 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray.c)
 *     _std::_Hash_std::_Umap_traits_HMONITOR_____CCoSimpleArray_Microsoft::WRL::ComPtr_IVirtualDesktop__4294967294_ComPtrCompareHelper__std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_CCoSimpleArray_Microsoft::WRL::ComPtr_IVirtualDesktop__4294967294_ComPtrCompareHelper______0___::_Try_emplace_HMONITOR_____const_&__::_1_::dtor$0 @ 0x180540DEA (_std--_Hash_std--_Umap_traits_HMONITOR_____CCoSimpleArray_Microsoft--WRL--ComPtr_IVirtualDesktop.c)
 *     ??$emplace@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@1@@Z @ 0x180540DFC (--$emplace@U-$pair@QEAUHMONITOR__@@V-$CCoSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@.c)
 *     _std::_Hash_std::_Umap_traits_HMONITOR_____CCoSimpleArray_Microsoft::WRL::ComPtr_IVirtualDesktop__4294967294_ComPtrCompareHelper__std::_Uhash_compare_HMONITOR_____std::hash_HMONITOR______std::equal_to_HMONITOR________std::allocator_std::pair_HMONITOR_____const_CCoSimpleArray_Microsoft::WRL::ComPtr_IVirtualDesktop__4294967294_ComPtrCompareHelper______0___::emplace_std::pair_HMONITOR_____const_CCoSimpleArray_Microsoft::WRL::ComPtr_IVirtualDesktop__4294967294_ComPtrCompareHelper______::_1_::dtor$0 @ 0x180540F19 (_std--_Hash_std--_Umap_traits_HMONITOR_____CCoSimpleArray_Microsoft--WRL--ComPtr_IV_ea_180540F19.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180541B38 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAll(v2 + 24);
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x38uLL);
  }
}
