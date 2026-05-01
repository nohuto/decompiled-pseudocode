/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CB14
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::basic_string_char_std::char_traits_char__std::allocator_char____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::basic_string_char_std::char_traits_char__std::allocator_char________0___::_Hash_std::_Umap_traits_unsigned_int_std::basic_string_char_std::char_traits_char__std::allocator_char____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::basic_string_char_std::char_traits_char__std::allocator_char________0____::_1_::dtor$0 @ 0x18034C160 (_std--_Hash_std--_Umap_traits_unsigned_int_std--basic_string_char_std--char_traits_char__std--al.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803490BC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$basic_string@DU-$char_traits@D@std@.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::string>>::~list<std::pair<unsigned int const,std::string>>(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  std::_List_node<std::pair<unsigned int const,std::string>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::string>,void *>>>(
    (unsigned __int64)a1,
    (_QWORD **)*a1,
    a3);
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
