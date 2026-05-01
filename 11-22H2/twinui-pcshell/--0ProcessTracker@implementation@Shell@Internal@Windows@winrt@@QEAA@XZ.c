/*
 * XREFs of ??0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027DDF8
 * Callers:
 *     ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027DD28 (--0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@2@@Z @ 0x1802223A0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802223A0.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::ProcessTracker *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessTracker(
        winrt::Windows::Internal::Shell::implementation::ProcessTracker *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::ProcessTracker::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  v2 = (char *)this + 32;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>>>>>::_Assign_grow(
    (__int64)(v2 + 24),
    0x10uLL,
    *((_QWORD *)v2 + 1));
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
