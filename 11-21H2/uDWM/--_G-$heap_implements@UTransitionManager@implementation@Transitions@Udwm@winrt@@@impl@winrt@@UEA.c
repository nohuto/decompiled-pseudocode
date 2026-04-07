/*
 * XREFs of ??_G?$heap_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F9ACC
 * Callers:
 *     ??_ETransitionManager@implementation@Transitions@Udwm@winrt@@WCA@EAAPEAXI@Z @ 0x180063940 (--_ETransitionManager@implementation@Transitions@Udwm@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004518C (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F910C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransition@Transitions@Udwm@winr.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionManager>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 72), (*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 72)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
    v4,
    *(_QWORD *)(a1 + 56));
  std::_Deallocate<16,0>(*(void **)(a1 + 56), 0x20uLL);
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(a1 + 32);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
