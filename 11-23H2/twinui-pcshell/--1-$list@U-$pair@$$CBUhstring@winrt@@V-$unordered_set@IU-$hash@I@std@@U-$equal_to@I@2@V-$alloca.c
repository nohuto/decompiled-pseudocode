/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E7AC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllTrackedProcessIds_::_1_::dtor$5 @ 0x1802B5B9F (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--GetAllTrackedP.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int________0___::_Hash_std::_Umap_traits_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int________0____::_1_::dtor$0 @ 0x1802B5CBB (_std--_Hash_std--_Umap_traits_winrt--hstring_std--unordered_set_unsigned_int_std--hash_unsigned_.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BDAAC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$ha.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>::~list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x58uLL);
}
