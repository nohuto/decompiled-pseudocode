/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x180187310
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x1802A27F0 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x1802A2810 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x1802A2830 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCA@EAAKXZ @ 0x1802A2850 (-Release@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCI@EAAKXZ @ 0x1802A2870 (-Release@VirtualDesktopController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopController::Release(VirtualDesktopController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
