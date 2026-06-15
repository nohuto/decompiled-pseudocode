/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801198E4
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__APPLICATION_REF_DATA__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__APPLICATION_REF_DATA__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$1 @ 0x180119308 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_long_const__APPLICATION_.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____void________std::piecewise_construct_t_const_&_std::tuple___int64_const_&__std::tuple_____::_1_::dtor$1 @ 0x18013DD6A (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair___int64_const__Microsoft--WRL--Co.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x30uLL);
}
