/*
 * XREFs of ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800827A4
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180081F90 (-OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180082560 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x1802ED980 (-OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z.c)
 *     ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18078E690 (-GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x18078F4B0 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??$_Find_lower_bound@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180082884 (--$_Find_lower_bound@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall AppViewDataSourceAdapterBase::FindItemForView(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 96);
  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    &v10,
    a3);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::_Find_lower_bound<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>(
    v4,
    v8);
  v5 = v9;
  if ( *(_BYTE *)(v9 + 25) || v10 < *(_QWORD *)(v9 + 32) )
    v5 = *v4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  if ( v5 == *v4 )
  {
    *a2 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 40);
    *a2 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return a2;
}
