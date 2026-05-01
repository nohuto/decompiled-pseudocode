/*
 * XREFs of ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180016BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_TaskViewShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TaskViewShowTest@@@details@tip@@@std@@XZ @ 0x180016E14 (-ensure_data@-$tip_test@U_tip_TaskViewShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180017364 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::ViewLoaded(TaskViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  int v9; // eax
  bool IsTabletMode; // al
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  int v15[2]; // [rsp+20h] [rbp-88h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-80h]
  char *v17; // [rsp+30h] [rbp-78h]
  char v18; // [rsp+38h] [rbp-70h]
  _BYTE v19[32]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v20[24]; // [rsp+60h] [rbp-48h] BYREF
  int v21; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (char *)this - 120;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  *(_QWORD *)v15 = v3;
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1LL);
  LODWORD(v16) = v4;
  v5 = ++*((_QWORD *)this + 26);
  v6 = (__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3;
  if ( v5 == v6 )
  {
    v17 = v2;
    v18 = 1;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (TaskViewHost *)((char *)this + 224),
      (wil::ActivityThreadWatcher *)v19);
    v7 = (_QWORD *)*((_QWORD *)this + 23);
    v8 = (_QWORD *)*((_QWORD *)this + 24);
    while ( v7 != v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)this + 15)) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 72LL))(*v7);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x163,
            (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
            (const char *)(unsigned int)v9,
            v15[0]);
      }
      ++v7;
    }
    *((_DWORD *)this + 150) = 1;
    if ( v21 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v19);
    v5 = *((_QWORD *)this + 26);
  }
  if ( v5 == (__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3 )
  {
    IsTabletMode = TabletModeHelpers::IsTabletMode((TabletModeHelpers *)v6);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (TaskViewHost *)((char *)this + 224),
      (__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3,
      IsTabletMode,
      1);
    v11 = tip::tip_test<_tip_TaskViewShowTest>::ensure_data((char *)this + 608);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      v15,
      v11);
    v12 = *(_QWORD *)v15;
    tip::details::test_common_data<0>::begin_update(*(_QWORD *)v15 + 8LL);
    v13 = v12 + 152;
    if ( !v12 )
      v13 = 8LL;
    *(_BYTE *)v13 = 1;
    if ( v12 )
    {
      tip::details::test_common_data<0>::end_update(v12 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(v15);
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    tip::tip_test<_tip_TaskViewShowTest>::complete((char *)this + 608);
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return 0LL;
}
