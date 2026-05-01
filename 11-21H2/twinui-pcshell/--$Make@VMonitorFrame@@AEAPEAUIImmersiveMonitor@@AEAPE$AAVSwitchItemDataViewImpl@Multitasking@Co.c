/*
 * XREFs of ??$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMonitorFrame@@@12@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042B7E8
 * Callers:
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042BAF8 (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitas.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PE$AAUIVirtualDesktopController@3456@PE$AAUIVirtualDesktopDataSource@3456@@Z @ 0x18042DCBC (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall Microsoft::WRL::Details::Make<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController __gc * &,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc * &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  MonitorFrame *v8; // rax
  MonitorFrame *v9; // rcx
  __int64 v10; // rdi

  *a1 = 0LL;
  v8 = (MonitorFrame *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v10 = MonitorFrame::MonitorFrame(v8, *a5, *a6, *a7);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v10;
    v9 = 0LL;
  }
  if ( v9 )
    operator delete(v9);
  return a1;
}
