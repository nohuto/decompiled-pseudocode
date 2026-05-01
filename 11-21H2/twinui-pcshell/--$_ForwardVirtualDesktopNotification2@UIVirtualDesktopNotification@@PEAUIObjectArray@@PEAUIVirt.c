/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z01@Z @ 0x18053E310
 * Callers:
 *     ?VirtualDesktopCreated@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18053F750 (-VirtualDesktopCreated@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@1@@Z @ 0x18053DCF0 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIObjectArray@@PE.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@@Z @ 0x18053E7D8 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v11 = 0LL;
  *(_QWORD *)&v12 = a4;
  *((_QWORD *)&v12 + 1) = a3;
  v7 = AddRefCountWrappers<IObjectArray *,IVirtualDesktop *>((__int64 *)&v12, (__int64 *)&v11);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12 = v11;
    v11 = 0uLL;
    v9 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIObjectArray__PEAUIVirtualDesktop____ZV__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIObjectArray__PEAUIVirtualDesktop___ZV__tuple_V__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___23__std___Z(
           a1,
           v8,
           &v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  return v9;
}
