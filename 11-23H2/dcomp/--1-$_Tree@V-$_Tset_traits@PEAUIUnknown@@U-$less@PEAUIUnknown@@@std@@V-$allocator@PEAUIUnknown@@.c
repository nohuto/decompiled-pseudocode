/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800A7300
 * Callers:
 *     ??1?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7330 (--1-$set@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@@Z @ 0x1800A71E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_si.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::~_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Erase_tree<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
