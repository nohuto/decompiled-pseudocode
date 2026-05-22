/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18015C4BC
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$0 @ 0x18015A4AE (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18015A4AE.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__DockInputInfo__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__DockInputInfo__void________std::piecewise_construct_t_const_&_std::tuple_DockInputIdentity_const_&__std::tuple_____::_1_::dtor$1 @ 0x18019B01E (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_DockInputIdentity_const__DockInpu.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x90uLL);
}
