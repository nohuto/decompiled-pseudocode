/*
 * XREFs of ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18057FDC8
 * Callers:
 *     _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator() @ 0x18057F57C (_lambda_3c92ed9cb50454309e6daa2ca29a5fa1_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800B826C (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5130 (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_f68c69481c14453c9aa040a1bc7d2eb1__void_ @ 0x18057DAD0 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(_ea_18057DAD0.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1805827D8 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180584F54 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180586BEC (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall StartupAppMonitor::ParentRegKeyCallback(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  const WCHAR *v4; // rdx
  __int64 v5; // rdx
  const WCHAR *v6; // r8
  struct wil::details::registry_watcher_state *v7; // rdx
  std::_Ref_count_base *v8; // rcx
  wil::details *v9[2]; // [rsp+30h] [rbp-69h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  std::_Ref_count_base *v12; // [rsp+50h] [rbp-49h]
  _QWORD *v13; // [rsp+58h] [rbp-41h]
  _QWORD v14[16]; // [rsp+60h] [rbp-39h] BYREF

  v13 = a1;
  if ( !a2 )
  {
    phkResult = 0LL;
    v3 = *(_QWORD *)(*a1 + 80LL);
    v4 = (const WCHAR *)(v3 + 80);
    if ( *(_QWORD *)(v3 + 104) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    if ( !RegOpenKeyExW(*(HKEY *)(v3 + 72), v4, 0, 0x20019u, &phkResult) )
    {
      StartupRegKeyNotification::RefreshRegKeyHandle(*(StartupRegKeyNotification **)(*a1 + 80LL));
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v11,
        a1);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v9,
        &v11);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_f68c69481c14453c9aa040a1bc7d2eb1__void_(
        v14,
        v9);
      v5 = *(_QWORD *)(*a1 + 80LL);
      v6 = (const WCHAR *)(v5 + 80);
      if ( *(_QWORD *)(v5 + 104) >= 8uLL )
        v6 = *(const WCHAR **)v6;
      v9[0] = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        (__int64)v9,
        *(HKEY *)(v5 + 72),
        v6,
        0,
        (__int64)v14);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v14);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        *a1 + 96LL,
        v9);
      StartupNotification::CheckForChange(*(StartupNotification **)(*a1 + 80LL), 1);
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
        v9,
        v7);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  }
  v8 = (std::_Ref_count_base *)a1[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
