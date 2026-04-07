/*
 * XREFs of ??0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180053264
 * Callers:
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x180052F84 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x18005345C (--0-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V-$_Uhash_com.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18005354C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Udwm::Transitions::implementation::TransitionManager *__fastcall winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager(
        winrt::Udwm::Transitions::implementation::TransitionManager *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::`vftable';
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::`vftable';
  *((_QWORD *)this + 4) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 6) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionManager>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>'};
  *((_QWORD *)this + 5) = &winrt::Udwm::Transitions::implementation::TransitionManager::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>'};
  v2 = (char *)this + 56;
  v5 = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
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
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    v2 + 24,
    16LL,
    *((_QWORD *)v2 + 1));
  HIDWORD(v5) = ((unsigned __int64)this + 120) >> 32;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>(
    (char *)this + 120,
    &v5);
  return this;
}
