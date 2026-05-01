/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x18014DB80
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x180206AC0 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x180206AE0 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x180206B00 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCA@EAAKXZ @ 0x180206B20 (-Release@VirtualDesktopController@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopController::Release(VirtualDesktopController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
