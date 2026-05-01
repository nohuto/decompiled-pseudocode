/*
 * XREFs of ?VirtualDesktopDestroyFailed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18053F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_ForwardVirtualDesktopNotification@UIObjectArray@@UIVirtualDesktop@@U2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E688 (--$_ForwardVirtualDesktopNotification@UIObjectArray@@UIVirtualDesktop@@U2@@CVirtualDesktopNotifi.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopDestroyFailed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification<IObjectArray,IVirtualDesktop,IVirtualDesktop>(
           a1 - 8,
           (__int64) IVirtualDesktopNotification::`vcall'{40,{flat}},
           a2,
           a3,
           a4);
}
