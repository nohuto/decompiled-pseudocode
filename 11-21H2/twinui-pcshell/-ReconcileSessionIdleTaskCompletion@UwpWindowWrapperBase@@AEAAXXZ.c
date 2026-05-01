/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415F54
 * Callers:
 *     ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x180413F10 (-AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415D54 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x1804162F0 (-RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180036120 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18003614C (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180036660 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18003668C (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180044620 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180044620.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800623F4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1800623F4.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x1800C3858 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_44086093bbdca45fc7a1a4ab785b676b___ @ 0x18040EE7C (Windows--Internal--ComTaskPool--QueueTask__lambda_44086093bbdca45fc7a1a4ab785b676b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f14610e5b21df92a29eaabf70e3866bb___ @ 0x18040F04C (Windows--Internal--ComTaskPool--QueueTask__lambda_f14610e5b21df92a29eaabf70e3866bb___.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(UwpWindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rsi
  bool v5; // cl
  int v6; // eax
  int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-2C8h] BYREF
  DWORD dwProcessId; // [rsp+28h] [rbp-2C0h] BYREF
  UwpWindowWrapperBase *v17; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-2B0h] BYREF
  void **v19; // [rsp+40h] [rbp-2A8h] BYREF
  DWORD v20; // [rsp+48h] [rbp-2A0h]
  _QWORD v21[40]; // [rsp+50h] [rbp-298h] BYREF
  _QWORD v22[40]; // [rsp+190h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  try
  {
    v2 = (*(__int64 (**)(void))(*(_QWORD *)this + 144LL))();
    v4 = (HWND)*((int *)this + 72);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 43);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 72) && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        v7 = (int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 288LL))(
                      (char *)this + 16,
                      &v15);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v22,
          (__int64)"AddSessionIdleTaskCompletion");
        v22[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
          (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22,
          *v7);
        if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB48,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)0x80070578LL,
            v15);
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          &v15,
          (__int64)this);
        v17 = this;
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v18, v15);
        v19 = (void **)v4;
        v20 = dwProcessId;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v21,
          (__int64)v22);
        v21[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_44086093bbdca45fc7a1a4ab785b676b___(
                v9,
                v8,
                *((_DWORD *)this + 60),
                (__int64)&v17);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB5E,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v10,
            v15);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
        *((_DWORD *)this + 43) |= 2u;
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      v11 = (int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 288LL))(
                     (char *)this + 16,
                     &v15);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)"RemoveSessionIdleTaskCompletion");
      v22[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22,
        *v11);
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        &v15,
        (__int64)this);
      v17 = this;
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v18, v15);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v19,
        (__int64)v22);
      v19 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_f14610e5b21df92a29eaabf70e3866bb___(
              v13,
              v12,
              *((_DWORD *)this + 60),
              &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB75,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v14,
          v15);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v19);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
      *((_DWORD *)this + 43) &= ~2u;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB7A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v3);
  }
}
