/*
 * XREFs of ?SetWindowingEnvironmentConfig@CImmersiveApp@@UEAAJPEAUIUnknown@@@Z @ 0x180308270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfig(CImmersiveApp *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v5; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(char *, __int64, __int64 *); // rsi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF
  PSRWLOCK v15; // [rsp+68h] [rbp+48h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D1,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v14 = 0LL;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  v15 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
         &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = *(__int64 (__fastcall **)(char *, __int64, __int64 *))(*((_QWORD *)this + 3) + 632LL);
    v11 = v14;
    v14 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v7 = v10((char *)this + 24, v13, &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      v8 = 0;
      goto LABEL_14;
    }
    v9 = 2268LL;
  }
  else
  {
    v9 = 2267LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
LABEL_14:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
  return v8;
}
