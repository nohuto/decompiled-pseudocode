/*
 * XREFs of ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1800411A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180017364 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::ToggleAllUpView(TaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebp
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  TabletModeHelpers *v9; // rcx
  unsigned __int8 IsTabletMode; // al
  int v11; // [rsp+20h] [rbp-78h]
  _BYTE v12[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v2, 1LL);
  v4 = *((_DWORD *)this + 180);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v5 = (*(__int64 (__fastcall **)(TaskViewHost *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
             this,
             *((_QWORD *)this + 29),
             *((_QWORD *)this + 30),
             *((unsigned int *)this + 66));
      v6 = v5;
      if ( v5 >= 0 )
        goto LABEL_4;
      v8 = 297LL;
      goto LABEL_14;
    }
  }
  else
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (TaskViewHost *)((char *)this + 344),
      (wil::ActivityThreadWatcher *)v12);
    IsTabletMode = TabletModeHelpers::IsTabletMode(v9);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (TaskViewHost *)((char *)this + 344),
      (__int64)(*((_QWORD *)this + 39) - *((_QWORD *)this + 38)) >> 3,
      IsTabletMode,
      0);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
  }
  v5 = (*(__int64 (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 64LL))(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  v8 = 293LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)v5,
    v11);
LABEL_5:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
