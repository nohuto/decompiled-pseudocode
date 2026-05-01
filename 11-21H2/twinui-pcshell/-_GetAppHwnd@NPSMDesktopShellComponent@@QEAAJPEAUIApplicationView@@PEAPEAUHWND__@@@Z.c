/*
 * XREFs of ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x18012B894
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012B6C0 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036F74 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x18012BABC (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x18012BB50 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall NPSMDesktopShellComponent::_GetAppHwnd(
        NPSMDesktopShellComponent *this,
        struct IApplicationView *a2,
        HWND *a3)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  __int64 v7; // rcx
  NPSMDesktopShellTelemetry *v8; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  wil::TraceLoggingProvider *v15; // rax
  __int64 v16; // rcx
  NPSMDesktopShellTelemetry *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  NPSMDesktopShellComponent *v19; // [rsp+50h] [rbp+18h] BYREF
  void (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+20h] BYREF
  __int64 v21; // [rsp+60h] [rbp+28h] BYREF
  __int64 *v22; // [rsp+68h] [rbp+30h] BYREF

  v20 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v19 = this;
  *a3 = 0LL;
  v21 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v21);
  if ( v21 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v21 + 24LL))(v21, a3);
    v5 = retaddr;
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38,
        (__int64)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
        (const char *)(unsigned int)v4);
    v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                        v5,
                                        _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
    if ( wil::TraceLoggingProvider::IsEnabled_(v6, 0) )
    {
      v8 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                          v7,
                                          _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
      NPSMDesktopShellTelemetry::TraceDbgMsg_(v8, L"Win32 hwnd =0x%x", *a3);
    }
  }
  else
  {
    wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(&v22, &v20);
    if ( v22 )
    {
      v19 = 0LL;
      v10 = *v22;
      v19 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, NPSMDesktopShellComponent **))(v10 + 24))(v22, &v19);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41,
          (__int64)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)v11);
      }
      else
      {
        v20 = 0LL;
        v12 = *(_QWORD *)v19;
        v20 = 0LL;
        v13 = (*(__int64 (__fastcall **)(NPSMDesktopShellComponent *, __int64, GUID *, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v12 + 24))(
                v19,
                1LL,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &v20);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x44,
            (__int64)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v13);
        }
        else
        {
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), HWND *))(*v20)[4])(v20, a3);
          v15 = (wil::TraceLoggingProvider *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                               v14,
                                               _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
          if ( wil::TraceLoggingProvider::IsEnabled_(v15, 0) )
          {
            v17 = (NPSMDesktopShellTelemetry *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                                                 v16,
                                                 _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
            NPSMDesktopShellTelemetry::TraceDbgMsg_(v17, L"Modern hwnd =0x%x", *a3);
          }
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v19);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return 0LL;
}
