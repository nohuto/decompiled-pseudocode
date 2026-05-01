/*
 * XREFs of ??1?$multimap@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18072B3C0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::dtor$13 @ 0x18072BC4F (_winrt--Windows--Internal--Shell--implementation--LaunchUriData--GetForLaunchUri_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::to_multimap_::_1_::dtor$0 @ 0x18072BFEA (_winrt--Windows--Internal--Shell--implementation--to_multimap_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@@Z @ 0x1806C6E94 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@.c)
 */

void __fastcall std::multimap<winrt::hstring,winrt::hstring>::~multimap<winrt::hstring,winrt::hstring>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
