/*
 * XREFs of _anonymous_namespace_::MonitorEventRegistration::Unregister @ 0x180071E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::MonitorEventRegistration::Unregister(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *(unsigned int *)(a1 + 24));
    result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
