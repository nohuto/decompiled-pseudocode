/*
 * XREFs of ?Unregister@ApplicationViewCollectionRegistration@@UEAAXXZ @ 0x180689C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewCollectionRegistration::Unregister(ApplicationViewCollectionRegistration *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 2) = 0LL;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *((unsigned int *)this + 6));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
    *((_DWORD *)this + 6) = 0;
  }
}
