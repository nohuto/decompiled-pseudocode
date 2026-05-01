/*
 * XREFs of ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x18001CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x18001C790 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128 (-ContinueOnCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A160 (--1-$test_data_control@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18028A210 (--C-$tip_test@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::ViewLoaded(TaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  TabletModeHelpers *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // r15
  int v7; // eax
  unsigned __int8 IsTabletMode; // al
  _BYTE v10[32]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-48h] BYREF
  int v12; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char v14; // [rsp+B0h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v2, 1LL);
  v4 = (TabletModeHelpers *)(*((_QWORD *)this + 28) + 1LL);
  *((_QWORD *)this + 28) = v4;
  if ( v4 == (TabletModeHelpers *)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (TaskViewHost *)((char *)this + 240),
      (wil::ActivityThreadWatcher *)v10);
    v5 = (_QWORD *)*((_QWORD *)this + 25);
    v6 = (_QWORD *)*((_QWORD *)this + 26);
    while ( v5 != v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 48LL))(*v5);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, *((_QWORD *)this + 15)) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 72LL))(*v5);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1AA,
            (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
            (const char *)(unsigned int)v7,
            (int)v2);
      }
      ++v5;
    }
    *((_DWORD *)this + 154) = 1;
    if ( v12 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v10);
  }
  if ( *((_QWORD *)this + 28) == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    IsTabletMode = TabletModeHelpers::IsTabletMode(v4);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (TaskViewHost *)((char *)this + 240),
      (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3,
      IsTabletMode,
      1u);
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::operator->(
                            (char *)this + 624,
                            &v14)
             + 264LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>(&v14);
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((char *)this + 624);
  }
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
