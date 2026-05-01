/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIAppViewDataSourceAdapter@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@9ComposableShell@Internal@Windows@@@Z @ 0x18007B268
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18007A310 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180067CD4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?TaskGroupController@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B674 (-TaskGroupController@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     ?TryGetTaskGroupsDataSourceAdapter@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x180077FFC (-TryGetTaskGroupsDataSourceAdapter@@YA-AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Wi.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1800780CC (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??4?$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z @ 0x18007C3B4 (--4-$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z.c)
 *     ??4?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitaskingViewHost@@@Z @ 0x18007CC38 (--4-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitas.c)
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x18007CC88 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ??4?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveAppCrusher@@@Z @ 0x18007CCD8 (--4-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersive.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall XamlAllUpViewController::XamlAllUpViewController(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 (__fastcall ***a7)(_QWORD, GUID *, _QWORD *),
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *TaskGroupsDataModel; // rax
  _QWORD *TaskGroupsDataSourceAdapter; // rax
  _QWORD *v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v23)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v27[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = &XamlAllUpViewController::`vftable'{for `__IXamlAllUpViewControllerPublicNonVirtuals'};
  a1[1] = &XamlAllUpViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = &XamlAllUpViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = &XamlAllUpViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[19] = &XamlAllUpViewController::`vftable'{for `IMonitorFrameDismissAnimationCallback'};
  a1[20] = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[21] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[22] = 0LL;
  a1[23] = 0LL;
  a1[27] = 0LL;
  wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=(a1 + 8, a3);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::operator=(a1 + 9, a4);
  wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::operator=(a1 + 7, a2);
  v14 = 0LL;
  v27[0] = 0LL;
  v15 = a6;
  if ( a6 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v27);
    RoGetAgileReference(0LL, &GUID_fff59320_db70_4865_8fed_8b502d692f12, v15, v27);
    v14 = v27[0];
  }
  v27[0] = 0LL;
  v16 = a1[23];
  a1[23] = v14;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v27);
  Microsoft::WRL::ComPtr<IAppLayoutCache>::operator=(a1 + 22, a8);
  __abi_winrt_ptr_assign(a1 + 24, a9);
  LOBYTE(v17) = 3;
  LOBYTE(v18) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    v18,
    v17);
  TaskGroupsDataModel = TryGetTaskGroupsDataModel(&a6, a5);
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 12, TaskGroupsDataModel);
  if ( a6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a6);
  TaskGroupsDataSourceAdapter = TryGetTaskGroupsDataSourceAdapter(&a6, a5);
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 13, TaskGroupsDataSourceAdapter);
  if ( a6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a6);
  if ( a1[13] )
  {
    v21 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupController(
            a1 + 13,
            &a6);
    winrt::Windows::Foundation::IUnknown::operator=(a1 + 27, v21);
    if ( a6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a6);
  }
  __abi_winrt_ptr_assign(a1 + 25, a10);
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))a7;
  v23 = **a7;
  v24 = a1[10];
  a1[10] = 0LL;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v25 = v23(v22, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 10);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x45,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v25,
      v27[0]);
  return a1;
}
