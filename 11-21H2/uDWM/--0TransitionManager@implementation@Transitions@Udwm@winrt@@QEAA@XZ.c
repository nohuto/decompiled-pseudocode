/*
 * XREFs of ??0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18005C220
 * Callers:
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18005C194 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@2@@Z @ 0x18005C2FC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18005C2FC.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Udwm::Transitions::implementation::TransitionManager *__fastcall winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager(
        winrt::Udwm::Transitions::implementation::TransitionManager *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::`vftable';
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionManager>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>'};
  *((_QWORD *)this + 4) = &winrt::Udwm::Transitions::implementation::TransitionManager::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>'};
  v2 = (char *)this + 48;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>>>>>::_Assign_grow(
    v2 + 24,
    16LL,
    *((_QWORD *)v2 + 1));
  return this;
}
