/*
 * XREFs of ??1?$list@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801A922C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0___::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0____::_1_::dtor$0 @ 0x1801A9035 (_std--_Hash_std--_Umap_traits_unsigned_short_std--unique_ptr_unsigned_char_[0]_std-_ea_1801A9035.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801A8C00 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

void __fastcall std::list<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>::~list<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
