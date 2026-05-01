/*
 * XREFs of ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x18016C420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppLayoutCache::SetCachedLayout(AppLayoutCache *this, struct IAppLayout *a2)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 (__fastcall *v5)(struct IAppLayout *, GUID *, char *); // rdi
  unsigned int v6; // ebx

  v4 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  v5 = *(__int64 (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  v6 = v5(a2, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, (char *)this + 64);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
