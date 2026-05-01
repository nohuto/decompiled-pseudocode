/*
 * XREFs of ?InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18006F120
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::InitializePrivilegedOperations(
        WindowEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  HRESULT (__stdcall *v8)(IUnknown *, const IID *const, void **); // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  char *v12; // rbx
  GUID *v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v12 = (char *)this + 88;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 11);
    v13 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
LABEL_17:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(a3, v13, v12);
    return 0LL;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v5 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v12 = (char *)this + 96;
    v15 = *((_QWORD *)this + 12);
    *(_QWORD *)v12 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, a2, 0LL);
    v13 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v6 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v12 = (char *)this + 104;
    v16 = *((_QWORD *)this + 13);
    *(_QWORD *)v12 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v16 + 16LL))(v16, a2, 0LL);
    v13 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( !v7 )
  {
    v8 = a3->lpVtbl->QueryInterface;
    v9 = (_QWORD *)((char *)this + 112);
    v10 = *((_QWORD *)this + 14);
    *v9 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, a2, 0LL);
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))v8)(a3, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, v9);
  }
  return 0LL;
}
