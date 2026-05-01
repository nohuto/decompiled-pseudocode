/*
 * XREFs of ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PE$AAUIVirtualDesktopController@3456@PE$AAUIVirtualDesktopDataSource@3456@@Z @ 0x18042DCBC
 * Callers:
 *     ??$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMonitorFrame@@@12@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042B7E8 (--$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@Co.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800EA9C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1804310B4 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=13
MonitorFrame *__fastcall MonitorFrame::MonitorFrame(
        MonitorFrame *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r8
  __int64 v12; // r9

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &MonitorFrame::`vftable';
  *((_QWORD *)this + 5) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = __abi_winrt_ptr_ctor(a3);
  *((_QWORD *)this + 8) = __abi_winrt_ptr_ctor(a5);
  *((_QWORD *)this + 9) = __abi_winrt_ptr_ctor(a4);
  *((_QWORD *)this + 10) = __abi_winrt_ptr_ctor(a6);
  *((_QWORD *)this + 11) = __abi_winrt_ptr_ctor(a7);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v11,
    v12);
  MonitorFrame::AddCallback(this);
  return this;
}
