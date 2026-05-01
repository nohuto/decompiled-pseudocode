/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18004F1D0
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18005044C (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@$$QEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180452C94 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4DesktopSwitcherDataSourceScopeOptions@@AEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x18004EA64 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18004FB10 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180050198 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$GetActivationFactory@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800503C0 (--$GetActivationFactory@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@@wil.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        struct IApplicationViewCollection *a3,
        struct IApplicationViewIconLoader *a4,
        struct IImmersiveShellHookService *a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a6)
{
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct _GUID *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+20h] [rbp-38h]
  void *v18; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*(_BYTE *)(a1 + 256) & 4) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8E,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070057LL,
      v16);
  *(_DWORD *)(a1 + 256) = a2;
  v9 = (__int64 *)wil::GetActivationFactory<Windows::Internal::ComposableShell::Multitasking::IIconFactoryStatics>(&v18);
  v10 = *v9;
  *v9 = 0LL;
  v11 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v18);
  wil::AcquireSRWLockExclusive(v19, a1 + 176);
  AppViewDataSourceAdapterBase::InitializeDataSource((AppViewDataSourceAdapterBase *)(a1 + 8), a3, a4, a5, a6);
  v18 = 0LL;
  v13 = AppViewSwitchItemZOrderSort_CreateInstance(v12, &v18);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v13,
      v17);
  v14 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v18);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9D,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v14,
      v17);
  AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)a1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v18);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v19);
  return 0LL;
}
