/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806C74A8
 * Callers:
 *     ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x18072B14C (--$_Emplace@Uhstring@winrt@@U12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     _std::_Tree_std::_Tmap_traits_winrt::hstring_winrt::hstring_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__winrt::hstring____1___::_Emplace_winrt::hstring_winrt::hstring__::_1_::dtor$0 @ 0x18072B247 (_std--_Tree_std--_Tmap_traits_winrt--hstring_winrt--hstring_std--less_winrt--hstrin_ea_18072B247.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z @ 0x1806C7680 (--_G-$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<winrt::hstring const,winrt::hstring>::`scalar deleting destructor'(v2 + 32);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x30uLL);
}
