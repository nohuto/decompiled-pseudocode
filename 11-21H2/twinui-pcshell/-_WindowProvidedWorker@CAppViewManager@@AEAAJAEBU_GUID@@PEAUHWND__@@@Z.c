/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802FE624
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e531a7656504c4cccac090a3ecbed8f7___1_long_::Invoke @ 0x1802F6A30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6A30.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003AC08 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_ @ 0x1802F33B4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F33B4.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1802FB1C8 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FC77C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  const struct _GUID *v3; // rsi
  char v5; // r12
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  char v10; // r13
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, const struct _GUID *, _BYTE *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-79h] BYREF
  const struct _GUID *v22; // [rsp+38h] [rbp-71h]
  struct IImmersiveApplicationInternal *v23; // [rsp+40h] [rbp-69h] BYREF
  HWND v24; // [rsp+48h] [rbp-61h] BYREF
  int v25; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v26[4]; // [rsp+54h] [rbp-55h] BYREF
  CAppViewManager *v27; // [rsp+58h] [rbp-51h] BYREF
  __int128 v28; // [rsp+60h] [rbp-49h]
  __int128 v29; // [rsp+70h] [rbp-39h]
  char v30; // [rsp+80h] [rbp-29h]
  CAppViewManager *v31; // [rsp+88h] [rbp-21h] BYREF
  char v32; // [rsp+90h] [rbp-19h]
  struct _GUID v33; // [rsp+94h] [rbp-15h]
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v35[16]; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v24 = a3;
  v3 = a2;
  v22 = a2;
  *(_QWORD *)&v28 = this;
  *((_QWORD *)&v28 + 1) = a2;
  v29 = v28;
  v5 = 1;
  v30 = 1;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)&v28 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         v3,
         &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1297LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_26;
  }
  if ( v25 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 23) + 48LL))(
           *((_QWORD *)this + 23),
           v3,
           v26);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1301LL;
      goto LABEL_6;
    }
    if ( (v26[0] & 1) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              v3,
              2LL,
              2LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x51C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    v21 = 0LL;
    v12 = *((_QWORD *)this + 23);
    v13 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _BYTE *, __int64 *))(*(_QWORD *)v12 + 56LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v21);
    v15 = v13(v12, v22, v35, AddressOf);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x522,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_25:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      v3 = v22;
LABEL_26:
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_34;
    }
    v23 = 0LL;
    if ( v21 )
    {
      v16 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v21, (__int64 *)&v23);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 1320LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_24:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
        goto LABEL_25;
      }
      v16 = CAppViewManager::UnensureApplication(this, v24, v23);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 1322LL;
        goto LABEL_18;
      }
    }
    if ( v10 )
    {
      v27 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      v31 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
      v32 = v10;
      v3 = v22;
      v33 = *v22;
      v34 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      v18 = (__int64)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v18 )
        v18 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_(
                v18,
                (__int64)&v31);
      v24 = (HWND)v18;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v18,
              1LL);
      v8 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x53F,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        goto LABEL_24;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
    }
    else
    {
      v3 = v22;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v5 = 0;
  v8 = 0;
LABEL_34:
  if ( v5 )
    CAppViewManager::_ObliterateOperation(this, v3);
  return v8;
}
