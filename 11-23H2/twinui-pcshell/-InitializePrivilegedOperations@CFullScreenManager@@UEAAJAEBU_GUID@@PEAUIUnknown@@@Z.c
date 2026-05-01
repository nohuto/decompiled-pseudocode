/*
 * XREFs of ?InitializePrivilegedOperations@CFullScreenManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801896E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::InitializePrivilegedOperations(
        CFullScreenManager *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)this + 88, &v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v6);
  }
  return 0LL;
}
