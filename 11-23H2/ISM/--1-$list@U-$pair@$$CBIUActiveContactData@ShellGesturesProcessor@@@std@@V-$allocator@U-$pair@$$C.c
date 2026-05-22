/*
 * XREFs of ??1?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1801B7EB0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ShellGesturesProcessor::ActiveContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ShellGesturesProcessor::ActiveContactData____0___::_Hash_std::_Umap_traits_unsigned_int_ShellGesturesProcessor::ActiveContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ShellGesturesProcessor::ActiveContactData____0____::_1_::dtor$0 @ 0x18006EDBE (_std--_Hash_std--_Umap_traits_unsigned_int_ShellGesturesProcessor--ActiveContactData_std--_Uhash.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18016E070 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUActiveContactData@ShellGesturesProces.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::~list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x80uLL);
}
