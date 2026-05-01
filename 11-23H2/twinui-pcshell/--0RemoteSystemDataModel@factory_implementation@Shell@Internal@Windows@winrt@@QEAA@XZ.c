/*
 * XREFs of ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180113570
 * Callers:
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 * Callees:
 *     ??0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180090368 (--0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$single_threaded_map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@winrt@@YA?AU?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@0@XZ @ 0x180113798 (--$single_threaded_map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@.c)
 *     ??$single_threaded_map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@winrt@@YA?AU?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@0@XZ @ 0x180113848 (--$single_threaded_map@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KUhstring@win.c)
 *     ??$single_threaded_map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@winrt@@YA?AU?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@0@XZ @ 0x1801138F8 (--$single_threaded_map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U-$less@Uhstring@w.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@QEAA_NXZ @ 0x1801158DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x1807187BC (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 */

// Hidden C++ exception states: #wind=15
winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **v2; // rbx
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  const unsigned __int16 *v6; // r8
  volatile signed __int32 *v8[3]; // [rsp+28h] [rbp-240h] BYREF
  unsigned __int16 pvData[264]; // [rsp+40h] [rbp-228h] BYREF

  v8[1] = (volatile signed __int32 *)this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>::`vftable';
  v2 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)((char *)this + 32);
  v3 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *)operator new(0x108uLL);
  *v2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper(v3);
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 11) = CloudPCHelpers::GetCloudPCMode(v4);
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 9) = v5;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 15) = 8LL;
  *((_DWORD *)this + 16) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 11,
    0x10uLL,
    *((_QWORD *)this + 9));
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  winrt::single_threaded_map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>>((char *)this + 144);
  winrt::single_threaded_map<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>>((char *)this + 152);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  winrt::single_threaded_map<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>>((char *)this + 256);
  *((_DWORD *)this + 66) = 0;
  *((_WORD *)this + 134) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::GetImpl'::`2'::impl)
    && *((_DWORD *)this + 11) == 1 )
  {
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v6);
    winrt::hstring::hstring((winrt::hstring *)v8, pvData);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&c_bootSystemId,
      (const struct winrt::hstring *)v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v8);
  }
  return this;
}
