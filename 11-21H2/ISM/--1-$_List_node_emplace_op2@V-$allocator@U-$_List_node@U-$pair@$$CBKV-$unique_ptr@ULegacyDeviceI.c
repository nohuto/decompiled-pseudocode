/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800CE590
 * Callers:
 *     _std::unordered_map_unsigned_long_std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo____std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo_________::_Insert_or_assign_unsigned_long_const_&_std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo______::_1_::dtor$0 @ 0x180058277 (_std--unordered_map_unsigned_long_std--unique_ptr_LegacyDeviceInfo_std--default_delete_LegacyDev.c)
 *     ??$emplace@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAI$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800CE1E0 (--$emplace@IV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@@-.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo________0___::emplace_unsigned_int_std::unique_ptr_LegacyDeviceInfo_std::default_delete_LegacyDeviceInfo______::_1_::dtor$0 @ 0x1800CE371 (_std--_Hash_std--_Umap_traits_unsigned_int_std--unique_ptr_LegacyDeviceInfo_std--de_ea_1800CE371.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
        __int64 a1)
{
  void **v2; // rcx

  v2 = *(void ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[3] )
    {
      operator delete(v2[3]);
      v2 = *(void ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
