/*
 * XREFs of ??1?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x1800B7588
 * Callers:
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$2 @ 0x18006817E (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x1800B7430 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 */

__int64 __fastcall std::set<CWindowData *>::~set<CWindowData *>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  return std::_Deallocate<16,0>(*a1, 0x28uLL);
}
