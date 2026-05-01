/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorNotificationService@@@Z @ 0x1800416F8
 * Callers:
 *     _anonymous_namespace_::MonitorEventRegistration::Register @ 0x180041690 (_anonymous_namespace_--MonitorEventRegistration--Register.c)
 *     _anonymous_namespace_::MonitorEventRegistration::Register_0 @ 0x1804A1DF0 (_anonymous_namespace_--MonitorEventRegistration--Register_0.c)
 *     _anonymous_namespace_::MonitorEventRegistration::Register_1 @ 0x180602C80 (_anonymous_namespace_--MonitorEventRegistration--Register_1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveMonitorNotificationService>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
