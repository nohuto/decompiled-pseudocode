/*
 * XREFs of ?VirtualDesktopIsPerMonitorChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJH@Z @ 0x18053F830
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJH@ZV?$tuple@H@std@@@Z @ 0x18053E6E4 (--$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopIsPerMonitorChanged(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  struct IObjectArray *v6; // rdx
  __int64 v7; // r9
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1 - 8;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v9 = a2;
  return ____QueueNotification2_UIVirtualDesktopNotification__H__ZH_CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJH_ZV__tuple_H_std___Z(
           v5,
           v6,
           &v9,
           v7);
}
