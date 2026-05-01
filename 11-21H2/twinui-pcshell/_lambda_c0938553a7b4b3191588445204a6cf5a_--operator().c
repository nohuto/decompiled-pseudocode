/*
 * XREFs of _lambda_c0938553a7b4b3191588445204a6cf5a_::operator() @ 0x1802E0BFC
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x1802E6840 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_c0938553a7b4b3191588445204a6cf5a_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  _DWORD v8[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  v10 = 0LL;
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*a2 + 280))(a2) & 1) != 0 )
  {
    v9 = 0LL;
    v4 = *a2;
    v11 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 496))(a2, &v11) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v9);
    if ( !v9 )
      v9 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 384))(a2);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(int (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( v6(v5, v9, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v10) >= 0 )
    {
      v8[0] = *(_DWORD *)a1;
      v8[1] = 0;
      (*(void (__fastcall **)(__int64 *, __int64, _DWORD *, _QWORD))(*a2 + 456))(a2, v10, v8, 0LL);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return 1;
}
