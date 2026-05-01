/*
 * XREFs of ?InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800B33F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800B36A0 (--4-$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPrese.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::InitializePrivilegedOperations(
        XamlExplorerHostShellComponent *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v5; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v8; // rdi
  RTL_SRWLOCK *v9; // rbx
  RTL_SRWLOCK *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+28h] BYREF

  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v5 )
  {
    v12 = 0LL;
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK **))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      &v12);
    v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 16);
    v8 = v12;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v11, v7 + 13);
    Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>::operator=(&v7[5], v8);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v11);
    v9 = v12;
    if ( *((RTL_SRWLOCK **)this + 18) != v12 )
    {
      v11[0] = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v11);
      v11[0] = *((RTL_SRWLOCK **)this + 18);
      *((_QWORD *)this + 18) = v9;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v11);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
