/*
 * XREFs of ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804A6380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014B200 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803236F4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1804A2BDC (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804A5894 (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804A5AC0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804A660C (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPPIAllUpViewHost::Show(CPPIAllUpViewHost *this, IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  char v5; // si
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  DWORD v10; // edx
  DWORD v11; // edx
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = 1;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"ShowPPIAllUpView");
  v14[0] = &MultitaskingViewTelemetry::ShowPPIAllUpView::`vftable';
  MultitaskingViewTelemetry::ShowPPIAllUpView::StartActivity((MultitaskingViewTelemetry::ShowPPIAllUpView *)v14);
  v7 = CMultitaskingViewHostBase<IPPIAllUpViewHost>::_RegisterForMonitorEvents((__int64)this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 140LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)this + 20, (__int64)a2);
  v13 = 0LL;
  v7 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))a2->lpVtbl[3].QueryInterface)(a2, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 145LL;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         &v13,
         3LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 148LL;
    goto LABEL_13;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 144LL))(*((_QWORD *)this + 19)) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v14,
      v10);
    v8 = -2147019873;
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 159LL;
    goto LABEL_13;
  }
  *((_BYTE *)this + 112) = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19));
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 163LL;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
    *((_QWORD *)this + 11),
    *((unsigned int *)this + 18));
  v5 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v14,
    v11);
  v8 = 0;
LABEL_15:
  if ( v5 )
    CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
  MultitaskingViewTelemetry::ShowPPIAllUpView::~ShowPPIAllUpView((MultitaskingViewTelemetry::ShowPPIAllUpView *)v14);
  if ( v6 >= 0 )
    LeaveCriticalSection(v4);
  return v8;
}
