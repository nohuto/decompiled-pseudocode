/*
 * XREFs of ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180568E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18017F904 (--0-$com_ptr_t@UIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@Uerr_except.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801B7448 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___ @ 0x180566AC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___.c)
 *     ??0?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805673C0 (--0-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::UpdateAppView(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        unsigned int a3,
        __int64 a4,
        char a5)
{
  int v8; // eax
  const char *v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+88h] [rbp+10h] BYREF

  v25 = a2;
  try
  {
    wil::com_query<IWin32ApplicationView,IApplicationView * &>(&v17, &v25);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17D,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v8,
        v16);
    if ( a5 )
    {
      Win32AppStateManager::UpdateAppViewWorker(a1, v16, a3, a4);
    }
    else
    {
      v10 = wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(
              &v19,
              a1);
      v11 = wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,wil::err_exception_policy>::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,wil::err_exception_policy>(
              &v18,
              a4);
      v20 = a1;
      v12 = *v10;
      *v10 = 0LL;
      v21 = v12;
      v13 = *v11;
      *v11 = 0LL;
      v22[0] = v13;
      v22[1] = v16;
      v23 = a3;
      v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___(
              v13,
              v14,
              *(_DWORD *)(a1 + 48),
              (__int64)&v20);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v22);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v21);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v19);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x192,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
          (const char *)(unsigned int)v15,
          v16);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x195,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
      v9);
  }
}
