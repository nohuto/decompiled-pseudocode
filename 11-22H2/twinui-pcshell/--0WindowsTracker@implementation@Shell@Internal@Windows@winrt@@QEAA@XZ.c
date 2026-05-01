/*
 * XREFs of ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF4D8
 * Callers:
 *     ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF994 (--0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800AF5E8 (--4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?DispatcherQueue@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AF608 (-DispatcherQueue@-$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController.c)
 *     ?CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ @ 0x1800AF65C (-CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=7
winrt::Windows::Internal::Shell::implementation::WindowsTracker *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker(
        winrt::Windows::Internal::Shell::implementation::WindowsTracker *this)
{
  char *v2; // rdi
  char *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  char *v10; // [rsp+68h] [rbp+20h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  v2 = (char *)this + 32;
  *((_QWORD *)this + 4) = 0LL;
  v3 = (char *)this + 40;
  v10 = (char *)this + 40;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)v3 + 1) = v4;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 7LL;
  *((_QWORD *)v3 + 7) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)v3 + 3,
    0x10uLL,
    *((_QWORD *)v3 + 1));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v5 = winrt::Windows::System::DispatcherQueueController::CreateOnDedicatedThread();
  winrt::Windows::Foundation::IUnknown::operator=(v2, v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)&v8);
  v6 = winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::DispatcherQueue(
         v2,
         &v9);
  winrt::Windows::System::DispatcherQueue::operator=((char *)this + 24, v6);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)&v9);
  return this;
}
