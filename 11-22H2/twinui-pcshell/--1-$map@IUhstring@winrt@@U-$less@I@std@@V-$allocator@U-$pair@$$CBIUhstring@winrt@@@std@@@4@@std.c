/*
 * XREFs of ??1?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x18070E830
 * Callers:
 *     _winrt::single_threaded_map_unsigned___int64_winrt::hstring_std::less_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__winrt::hstring______::_1_::dtor$0 @ 0x1802BDFEB (_winrt--single_threaded_map_unsigned___int64_winrt--hstring_std--less_unsigned___int64__std--all.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180113F84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 */

void __fastcall std::map<unsigned int,winrt::hstring>::~map<unsigned int,winrt::hstring>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
