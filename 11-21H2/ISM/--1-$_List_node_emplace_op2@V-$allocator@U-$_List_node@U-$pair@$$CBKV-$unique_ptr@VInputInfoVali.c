/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800CE5D8
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@1@@Z @ 0x1800CE03C (--$emplace@AEAKV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator________0___::emplace_unsigned_long_&_std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator______::_1_::dtor$0 @ 0x1800CE1CD (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_InputInfoValidator_std-_ea_1800CE1CD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>>>(
        __int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3 + 24LL))(v2[3], 1LL);
      v2 = *(_QWORD **)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
