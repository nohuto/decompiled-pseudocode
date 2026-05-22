/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A72DC
 * Callers:
 *     ??$_Emplace@PEAUIUnknown@@@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@std@@_N@1@$$QEAPEAUIUnknown@@@Z @ 0x1800A701C (--$_Emplace@PEAUIUnknown@@@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<IUnknown *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x28uLL);
}
