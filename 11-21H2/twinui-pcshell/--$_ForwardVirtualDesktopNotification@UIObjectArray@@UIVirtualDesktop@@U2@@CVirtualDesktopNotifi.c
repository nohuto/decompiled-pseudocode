/*
 * XREFs of ??$_ForwardVirtualDesktopNotification@UIObjectArray@@UIVirtualDesktop@@U2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E688
 * Callers:
 *     ?CurrentVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18053F680 (-CurrentVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifi.c)
 *     ?VirtualDesktopDestroyBegin@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18053F7A0 (-VirtualDesktopDestroyBegin@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifica.c)
 *     ?VirtualDesktopDestroyFailed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18053F7D0 (-VirtualDesktopDestroyFailed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotific.c)
 *     ?VirtualDesktopDestroyed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18053F800 (-VirtualDesktopDestroyed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificatio.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 */

__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification<IObjectArray,IVirtualDesktop,IVirtualDesktop>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *,IVirtualDesktop *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
