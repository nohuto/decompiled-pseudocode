/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorNotificationService@@@Z @ 0x180070CE8
 * Callers:
 *     _anonymous_namespace_::MonitorEventRegistration::Register @ 0x180070C80 (_anonymous_namespace_--MonitorEventRegistration--Register.c)
 *     _anonymous_namespace_::MonitorEventRegistration::Register_0 @ 0x180561770 (_anonymous_namespace_--MonitorEventRegistration--Register_0.c)
 *     _anonymous_namespace_::MonitorEventRegistration::Register_1 @ 0x18076D420 (_anonymous_namespace_--MonitorEventRegistration--Register_1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
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
