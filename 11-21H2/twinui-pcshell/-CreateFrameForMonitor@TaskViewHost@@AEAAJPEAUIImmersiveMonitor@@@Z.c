/*
 * XREFs of ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800165F8
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180017940 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180011D40 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@5678@AEBUSwitchItemDataView@Multitasking@ComposableShell@678@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@678@AEBUIVirtualDesktopController@Multitasking@ComposableShell@678@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800164F8 (-MakeTaskViewFrame@@YA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@AEBUIXaml.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800167C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@QEAAX.c)
 *     ??$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z @ 0x180016F7C (--$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::CreateFrameForMonitor(TaskViewHost *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  TaskViewFrame *v9; // rax
  char v10[8]; // [rsp+60h] [rbp-58h] BYREF
  TaskViewFrame *v11; // [rsp+68h] [rbp-50h] BYREF
  __int64 v12; // [rsp+70h] [rbp-48h] BYREF
  int v13; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+80h] [rbp-38h] BYREF

  v4 = __abi_winrt_cast_to(0LL, *((_QWORD *)this + 25), &_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  v12 = v4;
  MakeTaskViewFrame(
    &v11,
    (__int64)this + 224,
    *((_DWORD *)this + 66),
    a2,
    *((_QWORD *)this + 30),
    (char *)this + 152,
    (char *)this + 168,
    (char *)this + 176,
    (char *)this + 192,
    *((_QWORD *)this + 25),
    v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (*(__int64 (__fastcall **)(TaskViewFrame *, _BYTE *))(*(_QWORD *)v11 + 96LL))(v11, v14);
  v13 = (*(__int64 (__fastcall **)(TaskViewFrame *))(*(_QWORD *)v11 + 88LL))(v11);
  LODWORD(v12) = (*(__int64 (__fastcall **)(TaskViewFrame *))(*(_QWORD *)v11 + 80LL))(v11);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInTaskView>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetImpl'::`2'::impl,
    v6);
  v10[0] = 1;
  XamlSwitcherTelemetry::MonitorFrameCreated<bool,unsigned int,unsigned int,tagRECT>(v10, &v12, &v13, v5);
  v7 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v7 == *((_QWORD **)this + 40) )
  {
    std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> const &>(
      (__int64 *)this + 38,
      v7,
      (__int64 *)&v11);
  }
  else
  {
    v9 = v11;
    *v7 = v11;
    if ( v9 )
      (*(void (__fastcall **)(TaskViewFrame *))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 39) += 8LL;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
  return 0LL;
}
