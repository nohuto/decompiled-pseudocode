/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x180541CF4
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180540D00 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray.c)
 *     ??$emplace@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@1@@Z @ 0x180540DFC (--$emplace@U-$pair@QEAUHMONITOR__@@V-$CCoSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HMONITOR__ *,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
