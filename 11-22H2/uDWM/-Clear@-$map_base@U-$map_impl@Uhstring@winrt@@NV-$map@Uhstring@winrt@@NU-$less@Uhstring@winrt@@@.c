/*
 * XREFs of ?Clear@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXXZ @ 0x1800FD33C
 * Callers:
 *     ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800FD3F0 (-Clear@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800FBCFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 */

__int64 __fastcall winrt::map_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double>::Clear(
        volatile signed __int32 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  void ***v4; // rax
  void ***v5; // r8
  __int64 v6; // rcx
  void ***v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  v8 = (void ***)v2;
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  if ( &v8 == (void ****)v3 )
  {
    v5 = v8;
  }
  else
  {
    v4 = v8;
    v5 = *(void ****)v3;
    v8 = *(void ****)v3;
    *(_QWORD *)v3 = v4;
    v6 = v9;
    v9 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 8) = v6;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
    (__int64)&v8,
    (__int64)&v8,
    v5[1]);
  return std::_Deallocate<16,0>(v8, 0x30uLL);
}
