/*
 * XREFs of ??1?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@QEAA@XZ @ 0x18070E860
 * Callers:
 *     _winrt::single_threaded_map_winrt::hstring_winrt::Windows::Internal::Shell::RemoteSystem_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__winrt::Windows::Internal::Shell::RemoteSystem______::_1_::dtor$0 @ 0x1802BE021 (_winrt--single_threaded_map_winrt--hstring_winrt--Windows--Internal--Shell--RemoteSystem_std--le.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@@Z @ 0x180113FC8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Intern.c)
 */

void __fastcall std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::~map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
