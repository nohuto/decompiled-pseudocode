/*
 * XREFs of ?VirtualDesktopMoved@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x18053F880
 * Callers:
 *     <none>
 * Callees:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z01II@Z @ 0x18053E3E0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E3E0.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopMoved(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *,unsigned int,unsigned int>(
           a1 - 8,
           a2,
           a2,
           a3,
           a4,
           a5);
}
