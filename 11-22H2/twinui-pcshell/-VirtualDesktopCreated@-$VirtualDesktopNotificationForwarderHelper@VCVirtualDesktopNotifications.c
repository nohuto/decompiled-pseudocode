/*
 * XREFs of ?VirtualDesktopCreated@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FA120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopCreated(
        __int64 a1,
        __int64 a2)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *>(
           a1 - 8,
           (__int64) IVirtualDesktopNotification::`vcall'{24,{flat}},
           a2);
}
