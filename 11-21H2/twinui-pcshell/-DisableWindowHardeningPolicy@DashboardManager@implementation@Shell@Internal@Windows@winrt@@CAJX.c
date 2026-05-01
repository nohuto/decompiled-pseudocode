/*
 * XREFs of ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801806C8
 * Callers:
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 *     _lambda_702b059237f471f0f2abb9216d2aed5e_::operator() @ 0x1801C5044 (_lambda_702b059237f471f0f2abb9216d2aed5e_--operator().c)
 *     _lambda_b5a77111c728e18e017b33cb0f4bfddb_::operator() @ 0x1801C5310 (_lambda_b5a77111c728e18e017b33cb0f4bfddb_--operator().c)
 *     _lambda_b61fe1c2b60bf875518a0bd6b3647bbb_::operator() @ 0x1801C54CC (_lambda_b61fe1c2b60bf875518a0bd6b3647bbb_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy(void)
{
  HWND ForegroundWindow; // rax
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  HRESULT v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  IUnknown *pUnk; // [rsp+40h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+18h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow || !(unsigned int)GetWindowBand(ForegroundWindow, &pUnk) || (_DWORD)pUnk == 1 )
    return 0LL;
  ppv = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    pUnk = 0LL;
    v4 = *(_QWORD *)ppv;
    pUnk = 0LL;
    v5 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, IUnknown **))(v4 + 24))(
           ppv,
           &IID_IImmersiveApplicationManager,
           &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
           &pUnk);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = CoAllowSetForegroundWindow(pUnk, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AE,
          (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)(unsigned int)v7);
      v5 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))pUnk->lpVtbl[4].QueryInterface)(pUnk, 0LL, 1LL);
      v3 = v5;
      if ( v5 >= 0 )
      {
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&pUnk);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
        return 0LL;
      }
      v6 = 944LL;
    }
    else
    {
      v6 = 941LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&pUnk);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AB,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
  return v3;
}
