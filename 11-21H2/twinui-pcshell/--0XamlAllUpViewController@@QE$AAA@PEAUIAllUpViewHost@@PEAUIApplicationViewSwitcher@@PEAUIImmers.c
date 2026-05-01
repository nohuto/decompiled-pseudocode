/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@89Internal@Windows@@@Z @ 0x180018380
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180017E30 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1804384F0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?GetVirtualDesktopCollectionForMonitor@IVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUIVirtualDesktopPerMonitorCollection@2345@_K@Z @ 0x1800185C0 (-GetVirtualDesktopCollectionForMonitor@IVirtualDesktopDataSource@Multitasking@ComposableShell@In.c)
 *     ??4?$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z @ 0x180018634 (--4-$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z.c)
 *     ??4?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitaskingViewHost@@@Z @ 0x180018668 (--4-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitas.c)
 *     ??4?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveAppCrusher@@@Z @ 0x1800186B8 (--4-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersive.c)
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x180018708 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180018758 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall XamlAllUpViewController::XamlAllUpViewController(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, _QWORD *),
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 VirtualDesktopCollectionForMonitor; // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v18; // rcx
  int v19; // eax
  int v21[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

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
  wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=(a1 + 8, a3);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::operator=(a1 + 9, a4);
  wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::operator=(a1 + 7, a2);
  v13 = 0LL;
  *(_QWORD *)v21 = 0LL;
  if ( a5 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v21);
    RoGetAgileReference(0LL, &GUID_fff59320_db70_4865_8fed_8b502d692f12, a5, v21);
    v13 = *(_QWORD *)v21;
  }
  *(_QWORD *)v21 = 0LL;
  v14 = a1[23];
  a1[23] = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v21);
  Microsoft::WRL::ComPtr<IAppLayoutCache>::operator=(a1 + 22, a7);
  __abi_winrt_ptr_assign(a1 + 24, a8);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  v15 = a1[24];
  if ( v15 )
  {
    VirtualDesktopCollectionForMonitor = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource::GetVirtualDesktopCollectionForMonitor(
                                           v15,
                                           0LL);
    __abi_winrt_ptr_assign(a1 + 25, VirtualDesktopCollectionForMonitor);
    if ( VirtualDesktopCollectionForMonitor )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)VirtualDesktopCollectionForMonitor + 16LL))(VirtualDesktopCollectionForMonitor);
  }
  __abi_winrt_ptr_assign(a1 + 26, a9);
  v17 = **a6;
  v18 = a1[10];
  a1[10] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = v17(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 10);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v19,
      v21[0]);
  return a1;
}
