/*
 * XREFs of ??1?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x180636854
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker_::_1_::dtor$32 @ 0x1802B92AD (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--WindowsTracker_--_1_--dtor$32.c)
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0____::_1_::dtor$0 @ 0x1802BE5BB (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_winrt--guid_.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@?$_List_node@Uguid@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x180035490 (--$_Free_non_head@V-$allocator@U-$_List_node@Uguid@winrt@@PEAX@std@@@std@@@-$_List_node@Uguid@wi.c)
 */

void __fastcall std::list<winrt::guid>::~list<winrt::guid>(__int64 *a1)
{
  std::_List_node<winrt::guid,void *>::_Free_non_head<std::allocator<std::_List_node<winrt::guid,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x20uLL);
}
