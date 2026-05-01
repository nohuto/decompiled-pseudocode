/*
 * XREFs of _lambda_5d54c3ab385c004848e80adf9e043da1_::operator() @ 0x1802E0890
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E9920 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ec65a9fd59a71953153588e5bb4df1aa___ @ 0x1802DD688 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ec65a9fd59a71953153588e5bb4df1aa___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_5d54c3ab385c004848e80adf9e043da1_::operator()(__int64 a1, bool *a2)
{
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, GUID *, IUnknown **); // rbx
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v16; // [rsp+60h] [rbp+30h] BYREF
  int v17; // [rsp+68h] [rbp+38h]
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0;
  *a2 = 1;
  v18 = 0LL;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v5 = *Ptr;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 56))(Ptr, **(_QWORD **)a1, &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 1;
    *(_QWORD *)&v14 = &v16;
    *((_QWORD *)&v14 + 1) = &v18;
    v10 = v18;
    v11 = *(_QWORD *)(a1 + 8);
    punk = 0LL;
    v17 = 2;
    v12 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(v11 + 48) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v12(v11 + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ec65a9fd59a71953153588e5bb4df1aa___(punk, v10, &v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v7 >= 0 )
    {
      *a2 = v16 != 0;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 7114LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 7100LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v8);
LABEL_7:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
  return (unsigned int)v7;
}
