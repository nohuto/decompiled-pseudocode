/*
 * XREFs of ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180169770 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@@Z @ 0x180036428 (--$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHW.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x180036710 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036928 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1806ED95C (--1Completer@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall NPSMDesktopShellComponent::_GetAppHwnd(
        NPSMDesktopShellComponent *this,
        struct IApplicationView *a2,
        HWND *a3)
{
  int v4; // eax
  _DWORD *v5; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  union _RTL_RUN_ONCE *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  LPVOID Context; // [rsp+80h] [rbp+38h] BYREF
  struct IApplicationView *fPending; // [rsp+88h] [rbp+40h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+50h] BYREF

  fPending = a2;
  Context = this;
  *a3 = 0LL;
  v18 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v18);
  if ( v18 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v18 + 24LL))(v18, a3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
        (const char *)(unsigned int)v4,
        v12);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context)
      && (_DWORD)fPending )
    {
      v13 = &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper;
      Context = &qword_18098ED38;
      qword_18098ED38 = (__int64)&IamTraceLogging::`vftable';
      atexit(_lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(&v13);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v5 && *v5 )
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(
             &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper,
             0,
             (PBOOL)&fPending,
             &Context)
        && (_DWORD)fPending )
      {
        v13 = &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098ED38;
        qword_18098ED38 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
        v14 = 0;
        wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(&v13);
      }
      NPSMDesktopShellTelemetry::TraceDbgMsg_((NPSMDesktopShellTelemetry *)Context, L"Win32 hwnd =0x%x", *a3);
    }
  }
  else
  {
    wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(&v19, &fPending);
    if ( v19 )
    {
      Context = 0LL;
      v7 = *v19;
      Context = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v7 + 24))(v19, &Context);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41,
          (unsigned int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)v8,
          v12);
      }
      else
      {
        fPending = 0LL;
        v9 = *(_QWORD *)Context;
        fPending = 0LL;
        v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, struct IApplicationView **))(v9 + 24))(
                Context,
                1LL,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &fPending);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x44,
            (unsigned int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v10,
            v12);
        }
        else
        {
          (*(void (__fastcall **)(struct IApplicationView *, HWND *))(*(_QWORD *)fPending + 32LL))(fPending, a3);
          NPSMDesktopShellTelemetry::TraceDbgMsg<unsigned short const (&)[18],HWND__ * &>(v11, a3);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&fPending);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&Context);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return 0LL;
}
