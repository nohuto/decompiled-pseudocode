/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4
 * Callers:
 *     ?RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x1800717C0 (-RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x180072640 (-AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A06F0 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??$?0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x18008419C (--$-0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180084258 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$?0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x180084284 (--$-0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180084340 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B1280 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_28173a8c926c87e1969fb34dfb279c06___ @ 0x1801F62C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_28173a8c926c87e1969fb34dfb279c06___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_49fb25682482a2b5a4c0c490b68b0b86___ @ 0x1801F6370 (Windows--Internal--ComTaskPool--QueueTask__lambda_49fb25682482a2b5a4c0c490b68b0b86___.c)
 *     _lambda_28173a8c926c87e1969fb34dfb279c06_::_lambda_28173a8c926c87e1969fb34dfb279c06_ @ 0x1801F75D0 (_lambda_28173a8c926c87e1969fb34dfb279c06_--_lambda_28173a8c926c87e1969fb34dfb279c06_.c)
 *     _lambda_28173a8c926c87e1969fb34dfb279c06_::__lambda_28173a8c926c87e1969fb34dfb279c06_ @ 0x1801F764C (_lambda_28173a8c926c87e1969fb34dfb279c06_--__lambda_28173a8c926c87e1969fb34dfb279c06_.c)
 *     _lambda_49fb25682482a2b5a4c0c490b68b0b86_::__lambda_49fb25682482a2b5a4c0c490b68b0b86_ @ 0x1801F7674 (_lambda_49fb25682482a2b5a4c0c490b68b0b86_--__lambda_49fb25682482a2b5a4c0c490b68b0b86_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(UwpWindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rdi
  bool v5; // cl
  int v6; // eax
  int *v7; // rax
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int *v12; // rax
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-2C8h] BYREF
  DWORD dwProcessId; // [rsp+28h] [rbp-2C0h] BYREF
  UwpWindowWrapperBase *v20; // [rsp+30h] [rbp-2B8h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-2B0h] BYREF
  DWORD v22; // [rsp+48h] [rbp-2A0h]
  void **v23; // [rsp+50h] [rbp-298h] BYREF
  _BYTE v24[320]; // [rsp+190h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this);
    v4 = (HWND)*((int *)this + 74);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 74) && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        v7 = (int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 288LL))(
                      (char *)this + 16,
                      &v18);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::AddSessionIdleTaskCompletion((__int64)v24, v8, v7);
        if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB6E,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)0x80070578LL,
            v18);
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          &v18,
          (__int64)this);
        v20 = this;
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(v21, v18);
        v21[1] = v4;
        v22 = dwProcessId;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          &v23,
          v24);
        v23 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_49fb25682482a2b5a4c0c490b68b0b86___(
                v10,
                v9,
                *((unsigned int *)this + 62),
                &v20);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB84,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v11,
            v18);
        lambda_49fb25682482a2b5a4c0c490b68b0b86_::__lambda_49fb25682482a2b5a4c0c490b68b0b86_(&v20);
        *((_DWORD *)this + 45) |= 2u;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v24);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      v12 = (int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 288LL))(
                     (char *)this + 16,
                     &v18);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::RemoveSessionIdleTaskCompletion(
        (__int64)v24,
        v13,
        v12);
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        &v18,
        (__int64)this);
      v14 = lambda_28173a8c926c87e1969fb34dfb279c06_::_lambda_28173a8c926c87e1969fb34dfb279c06_(&v20, this, &v18, v24);
      v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_28173a8c926c87e1969fb34dfb279c06___(
              v16,
              v15,
              *((unsigned int *)this + 62),
              v14);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v17,
          v18);
      lambda_28173a8c926c87e1969fb34dfb279c06_::__lambda_28173a8c926c87e1969fb34dfb279c06_(&v20);
      *((_DWORD *)this + 45) &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v24);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBA0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v3);
  }
}
