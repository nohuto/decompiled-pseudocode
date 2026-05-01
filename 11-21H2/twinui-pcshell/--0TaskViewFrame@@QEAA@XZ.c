/*
 * XREFs of ??0TaskViewFrame@@QEAA@XZ @ 0x180016240
 * Callers:
 *     ??$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@3AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800160FC (--$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shel.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
TaskViewFrame *__fastcall TaskViewFrame::TaskViewFrame(TaskViewFrame *this)
{
  __int128 v3; // [rsp+20h] [rbp-18h]

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITaskViewFrame>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TaskViewFrame::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
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
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *(_QWORD *)&v3 = 0LL;
  DWORD2(v3) = 0;
  *(_OWORD *)((char *)this + 408) = v3;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *(_QWORD *)&v3 = 0LL;
  DWORD2(v3) = 0;
  *((_OWORD *)this + 28) = v3;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  return this;
}
