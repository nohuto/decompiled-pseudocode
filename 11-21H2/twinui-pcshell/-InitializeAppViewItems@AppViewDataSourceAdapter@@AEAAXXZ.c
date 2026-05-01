/*
 * XREFs of ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18004FB10
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18004F1D0 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXXZ @ 0x180454FD0 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18004F3CC (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18004FD40 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18004FE80 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems(__int64 **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  struct IApplicationView *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  struct IApplicationView *v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-48h] BYREF
  struct IApplicationView *v14; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 *v18; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppViewDataSourceAdapter *v20; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v20 = (AppViewDataSourceAdapter *)this;
  v2 = this[5];
  if ( !v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x130,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL,
      (int)v9);
  v22 = 0LL;
  v3 = *v2;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 24))(v2, &v22);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v4,
      (int)v9);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    &v11,
    v22);
  v13 = 0;
  v14 = 0LL;
  v15 = &v11;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v13);
  v16 = v12;
  v17 = 0LL;
  v18 = &v11;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v16);
  while ( v13 != v16 || v15 != v18 )
  {
    v5 = v14;
    v9 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    AppViewDataSourceAdapterBase::FindItemForView(this + 1, &v23, v5);
    if ( !v23 && AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)(this + 1), v5) )
    {
      AppViewDataSourceAdapterBase::AddItemForView(this + 1, &v10, (__int64)v5);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    ++v13;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v13);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v21 = 0LL;
  v6 = this[5];
  v7 = *v6;
  v21 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 72))(v6, &v21);
  if ( v21 )
  {
    AppViewDataSourceAdapterBase::FindItemForView(this + 1, &v20, v21);
    if ( v20 )
    {
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *, __int64))(*(_QWORD *)v20 + 72LL))(v20, v8);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
}
