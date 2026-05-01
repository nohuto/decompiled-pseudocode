/*
 * XREFs of ?VirtualDesktopCreated@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18053F750
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopCreated(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rdx

  v5 = a1 - 8;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *>(
           v5,
           v7,
           a2,
           a3);
}
