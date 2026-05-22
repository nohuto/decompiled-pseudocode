/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F6C88
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator________0___::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_InputInfoValidator_std::default_delete_InputInfoValidator________0____::_1_::dtor$0 @ 0x1800F6A21 (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_InputInfoValidator_std-_ea_1800F6A21.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F6584 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VInputInfoValidator@@U-$.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>::~list<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
