/*
 * XREFs of ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180070F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x18001C790 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128 (-ContinueOnCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801BF780 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@details@wil@@QEAA_NXZ @ 0x18028AD28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_St.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::ToggleAllUpView(TaskViewHost *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  TabletModeHelpers *v6; // rcx
  unsigned __int8 IsTabletMode; // al
  int v9; // [rsp+20h] [rbp-78h]
  unsigned __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h]
  _BYTE v12[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v10 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1LL);
  v2 = *((_DWORD *)this + 184);
  if ( !v2 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (TaskViewHost *)((char *)this + 360),
      (wil::ActivityThreadWatcher *)v12);
    IsTabletMode = TabletModeHelpers::IsTabletMode(v6);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (TaskViewHost *)((char *)this + 360),
      (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3,
      IsTabletMode,
      0);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
LABEL_12:
    v3 = (*(__int64 (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 64LL))(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 360LL;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  if ( v2 == 1 )
    goto LABEL_12;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::GetImpl'::`2'::impl)
    || *((_DWORD *)this + 184) != 2
    || (v3 = (*(__int64 (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 40LL))(this), v4 = v3, v3 >= 0) )
  {
    v3 = (*(__int64 (__fastcall **)(TaskViewHost *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
           this,
           *((_QWORD *)this + 29),
           *((_QWORD *)this + 30),
           *((unsigned int *)this + 70));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 371LL;
      goto LABEL_14;
    }
LABEL_15:
    v4 = 0;
    goto LABEL_16;
  }
  v5 = 368LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)v3,
    v9);
LABEL_16:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)&v10);
  return v4;
}
