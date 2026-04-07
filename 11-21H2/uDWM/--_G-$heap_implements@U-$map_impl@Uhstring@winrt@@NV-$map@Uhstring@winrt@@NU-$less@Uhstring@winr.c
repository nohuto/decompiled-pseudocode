/*
 * XREFs of ??_G?$heap_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F9A40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004518C (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800F8C88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void **v4; // rbx

  v4 = (void **)(a1 + 48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
    a1 + 48,
    a1 + 48,
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL));
  std::_Deallocate<16,0>(*v4, 0x30uLL);
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(a1);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
