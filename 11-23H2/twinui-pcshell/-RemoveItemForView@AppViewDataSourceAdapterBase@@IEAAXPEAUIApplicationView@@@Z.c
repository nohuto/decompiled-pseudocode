/*
 * XREFs of ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x18078F4B0
 * Callers:
 *     ?OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18078EC70 (-OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRoo.c)
 *     ?OnApplicationViewRemoved@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18078ED10 (-OnApplicationViewRemoved@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwit.c)
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x18078F000 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800827A4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18078FB60 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_18078FB60.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapterBase::RemoveItemForView(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  AppViewDataSourceAdapterBase::FindItemForView((__int64)this, &v8, (__int64)a2);
  if ( v8 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD4,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v4,
        v5);
    wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
      &v7,
      (__int64)a2);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::erase(
      (char *)this + 96,
      &v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}
