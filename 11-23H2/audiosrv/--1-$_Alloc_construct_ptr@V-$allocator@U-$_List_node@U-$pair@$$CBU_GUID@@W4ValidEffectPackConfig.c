/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801047AC
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__unsigned_long__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__unsigned_long__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$1 @ 0x18007AAC8 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_long_const__unsigned_lon.c)
 *     _std::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0___::emplace_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings__const_&__::_1_::dtor$0 @ 0x18007CC28 (_std--_Hash_std--_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std--_ea_18007CC28.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x28uLL);
}
