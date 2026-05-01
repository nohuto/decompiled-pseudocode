/*
 * XREFs of ?RemoteVirtualDesktopConnected@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FA060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::RemoteVirtualDesktopConnected(
        __int64 a1,
        __int64 a2)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *>(
           a1 - 8,
           (__int64) IVirtualDesktopNotification::`vcall'{104,{flat}},
           a2);
}
