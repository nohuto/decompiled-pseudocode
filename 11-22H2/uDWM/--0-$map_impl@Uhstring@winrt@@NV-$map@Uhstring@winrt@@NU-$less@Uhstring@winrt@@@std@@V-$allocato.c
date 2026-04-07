/*
 * XREFs of ??0?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@Z @ 0x1800FCA80
 * Callers:
 *     ??$make@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@winrt@@YA?A_P$$QEAV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@@Z @ 0x1800FC658 (--$make@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$al.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>>::`vftable';
  *(_QWORD *)(a1 + 32) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>::`vftable';
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 48) = *a2;
  *a2 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = a2[1];
  a2[1] = v5;
  return a1;
}
