/*
 * XREFs of ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180060A88 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z @ 0x18001C680 (-MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z.c)
 *     ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopDataSource@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopController@7ComposableShell@9Windows@winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@89Windows@winrt@@PEAUIRemoteSessionWindowManager@89Windows@ABI@@@Z @ 0x18005AB4C (-MakeTaskViewFrame@@YA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180066060 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@QEAAX.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180079380 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::CreateFrameForMonitor(TaskViewHost *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int v7; // r14d
  struct tagRECT *v8; // r15
  int v9; // edi
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  XamlSwitcherTelemetry *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v18; // rcx
  __int64 v19[2]; // [rsp+70h] [rbp-68h] BYREF
  struct tagRECT v20; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+90h] [rbp-48h] BYREF

  v4 = *((_QWORD *)this + 34);
  v5 = *((_QWORD *)this + 33);
  v6 = __abi_winrt_cast_to(0LL, *((_QWORD *)this + 26), &_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  *(_QWORD *)&v20.left = v6;
  MakeTaskViewFrame(
    v19,
    *((_DWORD *)this + 70),
    a2,
    *((_QWORD *)this + 30),
    (char *)this + 152,
    (char *)this + 168,
    (char *)this + 176,
    (char *)this + 192,
    *((_QWORD *)this + 26),
    v6,
    v5,
    (char *)this + 200,
    v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 96LL))(v19[0]);
  v8 = (struct tagRECT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19[0] + 112LL))(v19[0], v21);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 104LL))(v19[0]);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 88LL))(v19[0]);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInTaskView>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetImpl'::`2'::impl,
    1u,
    v11,
    v12);
  if ( XamlSwitcherTelemetry::IsEnabled(v13) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v14,
      (void (__cdecl *)())_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    v20 = *v8;
    XamlSwitcherTelemetry::MonitorFrameCreated_(v15, 1u, v10, v9, &v20, v7);
  }
  v16 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v16 == *((_QWORD **)this + 42) )
  {
    std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> const &>(
      (char *)this + 320,
      v16,
      v19);
  }
  else
  {
    v18 = v19[0];
    *v16 = v19[0];
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *((_QWORD *)this + 41) += 8LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
  return 0LL;
}
