/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180540B34
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180540D00 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  _QWORD *v6; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v6;
  v6[2] = **a4;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  return a1;
}
