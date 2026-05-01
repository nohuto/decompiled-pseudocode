/*
 * XREFs of ?VirtualDesktopNameChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1805FA1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopNameChanged(
        __int64 a1,
        HSTRING a2,
        HSTRING a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,HSTRING__ *>(
           a1 - 8,
           (__int64) IVirtualDesktopNotification::`vcall'{64,{flat}},
           a2,
           a3);
}
