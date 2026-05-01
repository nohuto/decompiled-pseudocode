/*
 * XREFs of ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180082560
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x18078F000 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180082264 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800827A4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180082A60 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems(AppViewDataSourceAdapter *this)
{
  __int64 **v2; // r14
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct IApplicationView *v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  struct IApplicationView *v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  int v13; // [rsp+40h] [rbp-68h]
  int v14; // [rsp+48h] [rbp-60h] BYREF
  struct IApplicationView *v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h] BYREF
  __int64 v18; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  AppViewDataSourceAdapter *v21; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  v21 = this;
  v2 = (__int64 **)((char *)this + 40);
  v11[1] = (__int64)this + 40;
  v3 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x138,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL,
      (int)v10);
  v23 = 0LL;
  v4 = *v3;
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(v3, &v23);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13B,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5,
      (int)v10);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    &v12,
    v23);
  v14 = 0;
  v15 = 0LL;
  v16 = &v12;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
  v17 = v13;
  v18 = 0LL;
  v19 = &v12;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
  while ( v14 != v17 || v16 != v19 )
  {
    v6 = v15;
    v10 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    AppViewDataSourceAdapterBase::FindItemForView((char *)this + 8, &v24, v6);
    if ( !v24 && AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)((char *)this + 8), v6) )
    {
      AppViewDataSourceAdapterBase::AddItemForView((__int64 *)this + 1, v11, (__int64)v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    ++v14;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  v22 = 0LL;
  v7 = *v2;
  v8 = **v2;
  v22 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 72))(v7, &v22);
  if ( v22 )
  {
    AppViewDataSourceAdapterBase::FindItemForView((char *)this + 8, &v21, v22);
    if ( v21 )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *, __int64))(*(_QWORD *)v21 + 72LL))(v21, v9);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
}
