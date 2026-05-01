/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@Z0@Z @ 0x18010F65C
 * Callers:
 *     ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x18010F620 (-ViewVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18010F6E0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$AddRefCountWrappers@PEAUIApplicationView@@@@YAJV?$tuple@PEAUIApplicationView@@@std@@PEAV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@@Z @ 0x18010F978 (--$AddRefCountWrappers@PEAUIApplicationView@@@@YAJV-$tuple@PEAUIApplicationView@@@std@@PEAV-$tup.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IApplicationView *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    a2);
  v10 = 0LL;
  v11 = a3;
  v5 = AddRefCountWrappers<IApplicationView *>(&v11, &v10);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v11 = v10;
    v10 = 0LL;
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIApplicationView____ZV__ComPtr_UIApplicationView___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIApplicationView___ZV__tuple_V__ComPtr_UIApplicationView___WRL_Microsoft___std___Z(
           a1,
           v6,
           &v11);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  return v7;
}
