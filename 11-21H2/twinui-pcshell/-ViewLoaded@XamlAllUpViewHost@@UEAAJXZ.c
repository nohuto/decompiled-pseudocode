/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1804399A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18000F170 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180017364 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x180431854 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r13d
  enum _TABLETMODESTATE *v5; // rdx
  __int64 v6; // rcx
  MonitorFrame **v7; // r14
  MonitorFrame **v8; // r12
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // rdi
  char IsTabletMode; // al
  __int64 v14; // rdx
  _BYTE v15[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = (char *)this - 120;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (XamlAllUpViewHost *)120));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = (enum _TABLETMODESTATE *)++*((_QWORD *)this + 29);
  v6 = (__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3;
  if ( v5 == (enum _TABLETMODESTATE *)v6 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 248),
      (wil::ActivityThreadWatcher *)v15);
    v7 = (MonitorFrame **)*((_QWORD *)this + 26);
    v8 = (MonitorFrame **)*((_QWORD *)this + 27);
    while ( 1 )
    {
      if ( v7 == v8 )
      {
        *((_DWORD *)this + 150) = 1;
        if ( v17 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
        wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v15);
        v5 = (enum _TABLETMODESTATE *)*((_QWORD *)this + 29);
        goto LABEL_11;
      }
      MonitorFrame::BeginInvokeAnimation(*v7);
      v20 = *((_QWORD *)*v7 + 5);
      v9 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v9 + 96LL))(v9, *((_QWORD *)this + 15), &v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      if ( v10 < 0 )
        break;
      if ( v19 )
      {
        v20 = *((_QWORD *)*v7 + 6);
        v11 = v20;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        if ( v10 < 0 )
        {
          v14 = 382LL;
          goto LABEL_19;
        }
      }
      ++v7;
    }
    v14 = 379LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v10);
    if ( v17 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v15);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  }
  else
  {
LABEL_11:
    if ( v5 == (enum _TABLETMODESTATE *)((__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3) )
    {
      IsTabletMode = TabletModeHelpers::IsTabletMode((TabletModeHelpers *)v6, v5);
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        (XamlAllUpViewHost *)((char *)this + 248),
        (__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3,
        IsTabletMode,
        1u);
    }
    v10 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
