/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180070618
 * Callers:
 *     ?Release@ResourceManager@Engine@Spectre@@QEAAXXZ @ 0x180070388 (-Release@ResourceManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@1@@Z @ 0x18002EA80 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_K_K@std@@PEAX@std@@@std@@@-$_Tree_val@U-$.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
}
