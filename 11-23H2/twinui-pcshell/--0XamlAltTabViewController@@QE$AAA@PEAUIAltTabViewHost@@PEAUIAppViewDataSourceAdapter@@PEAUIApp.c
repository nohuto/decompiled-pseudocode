/*
 * XREFs of ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x18077894C
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180067CD4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?TryGetTaskGroupsDataSourceAdapter@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x180077FFC (-TryGetTaskGroupsDataSourceAdapter@@YA-AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Wi.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1800780CC (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ??4?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitaskingViewHost@@@Z @ 0x18007CC38 (--4-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitas.c)
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x18007CC88 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ??4?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveAppCrusher@@@Z @ 0x18007CCD8 (--4-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersive.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1802EC456 (--0-$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppViewDat.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAltTabViewController::XamlAltTabViewController(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64))
{
  __int64 v10; // r9
  winrt::Windows::Foundation::IUnknown *TaskGroupsDataModel; // rax
  winrt::Windows::Foundation::IUnknown *TaskGroupsDataSourceAdapter; // rax
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64); // rsi
  __int64 v14; // rcx
  int v15; // eax
  int v17[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController((_QWORD *)(a1 + 8));
  *(_QWORD *)a1 = &XamlAltTabViewController::`vftable';
  *(_QWORD *)(a1 + 8) = &XamlAltTabViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &XamlAltTabViewController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &XamlAltTabViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 152) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 160) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_OWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  wil::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>(
    (_QWORD *)(a1 + 344),
    a3);
  wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=((__int64 *)(a1 + 64), a4);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::operator=((__int64 *)(a1 + 72), a5);
  wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::operator=((__int64 *)(a1 + 56), a2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    1u,
    3u,
    v10);
  TaskGroupsDataModel = (winrt::Windows::Foundation::IUnknown *)TryGetTaskGroupsDataModel(v17, *(__int64 **)(a1 + 344));
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 96),
    TaskGroupsDataModel);
  if ( *(_QWORD *)v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v17);
  TaskGroupsDataSourceAdapter = (winrt::Windows::Foundation::IUnknown *)TryGetTaskGroupsDataSourceAdapter(
                                                                          v17,
                                                                          *(__int64 **)(a1 + 344));
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 104),
    TaskGroupsDataSourceAdapter);
  if ( *(_QWORD *)v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v17);
  v13 = **a6;
  v14 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 80);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3A,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v15,
      v17[0]);
  return a1;
}
