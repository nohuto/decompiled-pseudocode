/*
 * XREFs of ?RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180015E7C
 * Callers:
 *     ??$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@3AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800160FC (--$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shel.c)
 * Callees:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18000FD70 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitor@@@Z @ 0x180015F8C (--4-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMon.c)
 *     ?CreateInBand@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@3@IAEBURect@Foundation@83@@Z @ 0x180015FDC (-CreateInBand@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@U.c)
 *     ?GetWorkArea@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x180016044 (-GetWorkArea@@YA-AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall TaskViewFrame::RuntimeClassInitialize(
        TaskViewFrame *this,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _OWORD *WorkArea; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 12) = a3;
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 64, a6);
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=((char *)this + 16, a4);
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=((char *)this + 24, a5);
  WorkArea = (_OWORD *)GetWorkArea(v18, a4);
  v15 = a8;
  *((_OWORD *)this + 2) = *WorkArea;
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 80, v15);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 88, a9);
  __abi_winrt_ptr_assign((char *)this + 120, a10);
  __abi_winrt_ptr_assign((char *)this + 112, a11);
  v16 = winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>::CreateInBand(
          a2,
          &v19,
          5LL,
          (char *)this + 32);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 56, v16);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  TaskViewFrame::CreateFilteredItemCollection(this, a7);
  TaskViewFrame::CreateTaskViewTimelineControl(this);
  TaskViewFrame::RegisterForEvents(this);
  return 0LL;
}
