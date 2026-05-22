/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A2E6C
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void________unsigned___int64_&_HeatDisplayOcclusionRect__::_1_::dtor$0 @ 0x1801A1C2F (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned___int64_const__He.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect____0___::emplace_unsigned___int64_&_HeatDisplayOcclusionRect__::_1_::dtor$0 @ 0x1801A267D (_std--_Hash_std--_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std--_Uhash_compare_unsi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0xB0uLL);
}
