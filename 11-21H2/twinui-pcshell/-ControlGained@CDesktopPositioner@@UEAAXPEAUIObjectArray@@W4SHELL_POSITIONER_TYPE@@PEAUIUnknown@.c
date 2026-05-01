/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804FABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_::operator() @ 0x1801B44FC (_lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804FDDD4 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=9
void CDesktopPositioner::ControlGained(__int64 a1, __int64 a2, int a3, ...)
{
  int v4; // eax
  int v5; // eax
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *, unsigned int *); // rdi
  int v9; // eax
  const struct _GUID *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  __int64 v19; // rcx
  __int64 v20; // rbx
  int (__fastcall *v21)(__int64, __int64, __int64 *); // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+28h] [rbp-51h] BYREF
  void *v25; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v31[13]; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  unsigned int i; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+67h] BYREF
  int v35; // [rsp+E8h] [rbp+6Fh] BYREF
  int (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, int (__fastcall ***)(_QWORD, GUID *, __int64 *));
  v35 = a3;
  v34 = a2;
  v24 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 184) + 32LL))(
         *(_QWORD *)(a1 + 184),
         1LL,
         &v24);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x264,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 40LL))(v24, 3LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x265,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5);
  v30 = 0LL;
  v29 = 0LL;
  if ( v36 )
  {
    v6 = **v36;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    if ( v6(v36, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v29) >= 0 )
    {
      v28 = 0LL;
      v7 = v29;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v29 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
      v9 = v8(v7, &v28, &i);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27E,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_23:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
        goto LABEL_24;
      }
      if ( i )
        goto LABEL_23;
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      v11 = DesktopOperation_CreateInstance(v10, &v25);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 642LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          v12,
          (void *)v13,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
LABEL_22:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        goto LABEL_23;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v25 + 24LL))(v25, v28);
      v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v25 + 40LL))(v25);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 645LL;
        goto LABEL_14;
      }
      v27 = 0LL;
      v14 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v25)(
              v25,
              &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
              &v27);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v17 = v27;
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
        v14 = v18(v17, &v30);
        v15 = retaddr;
        if ( v14 >= 0 )
          goto LABEL_20;
        v16 = 650LL;
      }
      else
      {
        v16 = 648LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v15,
        (void *)v16,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
LABEL_20:
      v19 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_22;
    }
  }
LABEL_24:
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v26);
  for ( i = 0; i < v26; ++i )
  {
    v31[0] = &v34;
    v31[1] = (__int64 *)&i;
    v31[2] = (__int64 *)(a1 - 128);
    v31[3] = (__int64 *)&v35;
    v31[4] = &v30;
    va_copy((va_list)&v31[5], va);
    lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_::operator()(v31);
  }
  v20 = *(_QWORD *)(a1 + 184);
  v21 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 32LL);
  v22 = v24;
  v24 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21(v20, 2LL, &v24) >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 40LL))(v24, 0LL);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BA,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v23);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
}
