/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180113F84
 * Callers:
 *     ??$single_threaded_map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@winrt@@YA?AU?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@0@XZ @ 0x180113798 (--$single_threaded_map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@.c)
 *     ??$single_threaded_map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@winrt@@YA?AU?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@0@XZ @ 0x180113848 (--$single_threaded_map@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KUhstring@win.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180113F84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 *     ??1?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x18070E830 (--1-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@@@std@@@4@@std.c)
 *     ??_E?$heap_implements@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18070F3B0 (--_E-$heap_implements@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$all.c)
 *     ?Clear@?$map_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@@winrt@@QEAAXXZ @ 0x18070F830 (-Clear@-$map_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180113F84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x18068323C (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  unsigned int v7; // edx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16,0>(v6, 48LL) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
    winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(
      (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)(v6 + 4),
      v7);
  }
  return result;
}
