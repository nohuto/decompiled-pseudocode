/*
 * XREFs of ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EA304
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180028AE4 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F35A4 (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18018FB90 (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DF344 (--0-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  RTL_SRWLOCK *v7; // rbx
  int First; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  __int64 *v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>(
         v16,
         (__int64)a2);
  try
  {
    v5 = wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v4,
           &v20);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v5 + 48LL))(*v5, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F5,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        (int)v15);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v16);
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v16[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = 0LL;
    v17 = v21;
    v18 = 4;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
              (__int64)this,
              (__int64)&v17,
              &v15,
              0LL);
    if ( First == -2147319765 )
    {
      if ( !v7 )
      {
LABEL_7:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v15);
        return 0LL;
      }
    }
    else
    {
      if ( First < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x705,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First,
          (int)v15);
      v16[0] = 0LL;
      v11 = *v15;
      v16[0] = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 504))(v15, v16);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x70A,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v12,
          (int)v15);
      GetAppTitleBarConfig((__int64)&v20, (__int64)a2, v13);
      if ( !BYTE2(v20) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x70F,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x8000FFFFLL,
          (int)v15);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16[0] + 176LL))(v16[0], &v20);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x711,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v14,
          (int)v15);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v16);
      if ( !v7 )
        goto LABEL_7;
    }
    ReleaseSRWLockExclusive(v7);
    goto LABEL_7;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x715,
                     (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v9);
    return (unsigned int)v20;
  }
  return result;
}
