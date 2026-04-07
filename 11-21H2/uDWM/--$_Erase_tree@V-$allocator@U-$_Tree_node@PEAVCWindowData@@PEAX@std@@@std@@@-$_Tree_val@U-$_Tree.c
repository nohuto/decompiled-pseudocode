/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x18005AE28
 * Callers:
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x18005ABC8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18005ADE8 (-clear@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x18005AE28 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 *     ??1?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x1800B452C (--1-$set@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWindowData@@@3@@std@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x18005AE28 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = std::_Deallocate<16,0>(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
