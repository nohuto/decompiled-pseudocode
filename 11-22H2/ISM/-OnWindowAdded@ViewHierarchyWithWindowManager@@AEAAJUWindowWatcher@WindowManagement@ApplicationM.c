/*
 * XREFs of ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x18001CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$emplace@U?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x18001CEC4 (--$emplace@U-$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@-$_.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x18003A574 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowAdded(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL))(*a3, &v14);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v14;
  v16 = v14;
  v18 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 80LL))(v14, &v18);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = v18;
  v10 = 0LL;
  v11 = 0xCBF29CE484222325uLL;
  do
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + v10++) ^ (unsigned __int64)v11);
  while ( v10 < 4 );
  v12 = *(_QWORD *)(std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
                      a1 + 120,
                      &v14,
                      &v18,
                      v11)
                  + 8);
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 128);
  if ( v12 == *(_QWORD *)(a1 + 128) )
  {
    LODWORD(v14) = v9;
    v15 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>(
      a1 + 120,
      v17,
      &v14);
    if ( v15 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v15);
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
