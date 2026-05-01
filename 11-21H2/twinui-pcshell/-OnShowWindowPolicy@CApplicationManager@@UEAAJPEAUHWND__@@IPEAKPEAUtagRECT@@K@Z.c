/*
 * XREFs of ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180106620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180106894 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180106AE8 (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnShowWindowPolicy(
        CApplicationManager *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  RTL_SRWLOCK *v9; // rbx
  struct IImmersiveMonitor **AddressOf; // rax
  char v11; // di
  __int64 *v12; // rax
  CApplicationManager *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 *ViewPropertySetFromHintsForWin32; // rax
  void (__fastcall *v18)(char *, GUID *, IUnknown **); // rdi
  HRESULT v19; // edi
  int v20; // eax
  void (__fastcall ***v21)(_QWORD, GUID *, IUnknown **); // [rsp+30h] [rbp-20h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  *a4 = 0;
  *a5 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2, a2, a3) || !(unsigned int)GetWindowBand(a2, &a5) || (_DWORD)a5 != 1 )
    return 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  AddressOf = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&ppvOut);
  CApplicationManager::_MonitorFromWindow((CApplicationManager *)((char *)this - 368), a2, AddressOf);
  v11 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
          *((_QWORD *)this + 21),
          a2,
          (unsigned int)a5,
          1LL,
          ppvOut);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( !v11 )
    return 0LL;
  v21 = 0LL;
  v12 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v21);
  v14 = CApplicationManager::_HandleCreation_EnsureApplicationView(v13, 0LL, a2, (struct IApplicationView **)v12);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE32,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v14);
  }
  else
  {
    v16 = 0LL;
    v23 = 0LL;
    punk = 0LL;
    (**v21)(v21, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &punk);
    if ( punk )
    {
      ViewPropertySetFromHintsForWin32 = (__int64 *)Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v24);
      v16 = *ViewPropertySetFromHintsForWin32;
      *ViewPropertySetFromHintsForWin32 = 0LL;
      v23 = v16;
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v24);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&punk);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v18 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 40) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v18((char *)this - 320, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v19 = IUnknown_QueryService(
            punk,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
            &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3E,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v23);
      v15 = v19;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(void *, void (__fastcall ***)(_QWORD, GUID *, IUnknown **), __int64, _QWORD, unsigned int *))(*(_QWORD *)ppvOut + 32LL))(
              ppvOut,
              v21,
              v16,
              0LL,
              a4);
      v15 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v23);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3F,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v23);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  return v15;
}
