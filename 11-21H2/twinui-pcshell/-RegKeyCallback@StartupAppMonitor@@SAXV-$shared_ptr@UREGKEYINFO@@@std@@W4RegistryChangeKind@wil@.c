/*
 * XREFs of ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058008C
 * Callers:
 *     _lambda_f68c69481c14453c9aa040a1bc7d2eb1_::operator() @ 0x18057F634 (_lambda_f68c69481c14453c9aa040a1bc7d2eb1_--operator().c)
 *     _lambda_f9d92d283d219251b39b1fca3d115af1_::operator() @ 0x18057F698 (_lambda_f9d92d283d219251b39b1fca3d115af1_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800B826C (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5130 (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x18017EE84 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void_ @ 0x18057DA70 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(enum_wil--Reg.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1805827D8 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180584F54 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall StartupAppMonitor::RegKeyCallback(_QWORD *a1, int a2)
{
  const WCHAR *v3; // rbx
  __int64 v4; // rcx
  struct wil::details::registry_watcher_state *v5; // rdx
  std::_Ref_count_base *v6; // rcx
  wil::details *v7[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v9; // [rsp+48h] [rbp-51h]
  _QWORD *v10; // [rsp+50h] [rbp-49h]
  _QWORD v11[16]; // [rsp+60h] [rbp-39h] BYREF

  v10 = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        (HKEY *)(*(_QWORD *)(*a1 + 80LL) + 64LL),
        0LL);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v8,
        a1);
      v3 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion";
      if ( *(_DWORD *)(*(_QWORD *)(*a1 + 80LL) + 56LL) != 2 )
        v3 = L"Software\\Microsoft\\Windows\\CurrentVersion";
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v7,
        &v8);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void_(
        v11,
        v7);
      v4 = *(_QWORD *)(*a1 + 80LL);
      v7[0] = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        (__int64)v7,
        *(HKEY *)(v4 + 72),
        v3,
        0,
        (__int64)v11);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v11);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        *a1 + 96LL,
        v7);
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
        v7,
        v5);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
  }
  else
  {
    StartupNotification::CheckForChange(*(StartupNotification **)(*a1 + 80LL), 1);
  }
  v6 = (std::_Ref_count_base *)a1[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
