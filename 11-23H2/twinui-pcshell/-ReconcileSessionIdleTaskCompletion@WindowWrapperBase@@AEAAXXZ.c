/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1804EB388
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1802D9002 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1804E90D0 (-AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1804EB6E0 (-RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804ED04C (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
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
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2f6d80cf1a257304c33e766508a8500c___ @ 0x1804E3950 (Windows--Internal--ComTaskPool--QueueTask__lambda_2f6d80cf1a257304c33e766508a8500c___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7b7d3edf23afb6f3b75600d49fe376df___ @ 0x1804E39E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_7b7d3edf23afb6f3b75600d49fe376df___.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rdi
  bool v5; // cl
  int v6; // eax
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  DWORD dwProcessId[2]; // [rsp+20h] [rbp-2C8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-2C0h] BYREF
  WindowWrapperBase *v17; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-2B0h] BYREF
  void **v19; // [rsp+40h] [rbp-2A8h] BYREF
  DWORD v20; // [rsp+48h] [rbp-2A0h]
  _QWORD v21[40]; // [rsp+50h] [rbp-298h] BYREF
  _BYTE v22[320]; // [rsp+190h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (**)(void))(*(_QWORD *)this + 144LL))();
    v4 = (HWND)*((int *)this + 74);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 74) && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        LODWORD(v16) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::AddSessionIdleTaskCompletion(
          (__int64)v22,
          v7,
          (int *)&v16);
        if ( !GetWindowThreadProcessId(v4, dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xAC6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)0x80070578LL,
            dwProcessId[0]);
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          &v16,
          (__int64)this);
        v17 = this;
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v18, v16);
        v19 = (void **)v4;
        v20 = dwProcessId[0];
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v21,
          (__int64)v22);
        v21[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_7b7d3edf23afb6f3b75600d49fe376df___(
                v9,
                v8,
                *((_DWORD *)this + 62),
                (__int64)&v17);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xADC,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v10,
            dwProcessId[0]);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
        *((_DWORD *)this + 45) |= 2u;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      dwProcessId[0] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::RemoveSessionIdleTaskCompletion(
        (__int64)v22,
        v11,
        (int *)dwProcessId);
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        dwProcessId,
        (__int64)this);
      v17 = this;
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        &v18,
        *(__int64 *)dwProcessId);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v19,
        (__int64)v22);
      v19 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_2f6d80cf1a257304c33e766508a8500c___(
              v13,
              v12,
              *((_DWORD *)this + 62),
              &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAF3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14,
          dwProcessId[0]);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      *((_DWORD *)this + 45) &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)dwProcessId);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAF8,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v3);
  }
}
