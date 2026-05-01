/*
 * XREFs of ?Uninitialize@CImmersiveMode@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1801B88F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::Uninitialize(
        CImmersiveMode *this,
        int (__fastcall ***a2)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  int (__fastcall *v4)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  if ( v4((struct IImmersiveMonitorManager *)a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, *((unsigned int *)this + 68));
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
    *((_QWORD *)this + 36) = 0LL;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
}
