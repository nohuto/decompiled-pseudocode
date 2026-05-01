/*
 * XREFs of ??$single_threaded_map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@winrt@@YA?AU?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@0@XZ @ 0x180113848
 * Callers:
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180113570 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@@Z @ 0x180113A64 (--0-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180113F84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::single_threaded_map<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>>(
        _QWORD *a1)
{
  size_t size_of; // rax
  _QWORD *v3; // rax
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v6; // [rsp+50h] [rbp+8h]

  v5[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v5[0] = v3;
  v6 = operator new(0x40uLL);
  winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>(
    v6,
    v5);
  *v6 = &winrt::impl::heap_implements<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::`vftable';
  *a1 = v6 + 2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
    v5,
    v5,
    *(_QWORD *)(v5[0] + 8LL));
  std::_Deallocate<16,0>(v5[0], 48LL);
  return a1;
}
