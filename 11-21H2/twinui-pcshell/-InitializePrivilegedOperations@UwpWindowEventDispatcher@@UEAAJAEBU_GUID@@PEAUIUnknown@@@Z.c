/*
 * XREFs of ?InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1803EEA90
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::InitializePrivilegedOperations(
        UwpWindowEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  char *v6; // rbx
  GUID *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  HRESULT (__stdcall *v13)(IUnknown *, const IID *const, void **); // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 88;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 11);
    v7 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
LABEL_17:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(a3, v7, v6);
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v8 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 96;
    v9 = *((_QWORD *)this + 12);
    *(_QWORD *)v6 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, a2, 0LL);
    v7 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v10 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 104;
    v11 = *((_QWORD *)this + 13);
    *(_QWORD *)v6 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, a2, 0LL);
    v7 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
    goto LABEL_17;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( !v12 )
  {
    v13 = a3->lpVtbl->QueryInterface;
    v14 = (_QWORD *)((char *)this + 112);
    v15 = *((_QWORD *)this + 14);
    *v14 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, a2, 0LL);
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))v13)(a3, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, v14);
  }
  return 0LL;
}
