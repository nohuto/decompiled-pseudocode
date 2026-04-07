/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B7500
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_CWindowData___void_______::_Tree_temp_node_std::allocator_std::_Tree_node_CWindowData___void________CWindowData___&__::_1_::dtor$1 @ 0x1800B71A6 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_CWindowData___void_______--_Tree_temp_node_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        __int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16,0>(v1, 0x28uLL);
  return result;
}
