/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A71F0
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$1 @ 0x1801A674C (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_int_const__ComboButtonRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x70uLL);
}
