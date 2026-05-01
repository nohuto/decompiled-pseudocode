/*
 * XREFs of ?Release@VirtualDesktop@@UEAAKXZ @ 0x180178BB0
 * Callers:
 *     ?Release@VirtualDesktop@@W7EAAKXZ @ 0x1802A2D50 (-Release@VirtualDesktop@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBA@EAAKXZ @ 0x1802A2D70 (-Release@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBI@EAAKXZ @ 0x1802A2D90 (-Release@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCA@EAAKXZ @ 0x1802A2DB0 (-Release@VirtualDesktop@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCI@EAAKXZ @ 0x1802A2DD0 (-Release@VirtualDesktop@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktop::Release(VirtualDesktop *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(this);
}
