/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z01II@Z @ 0x18053E3E0
 * Callers:
 *     ?VirtualDesktopMoved@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x18053F880 (-VirtualDesktopMoved@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@1@@Z @ 0x18053DD88 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIObjectArray@@.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@@Z @ 0x18053E8F0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$.c)
 *     ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA@$$QEAV01@@Z @ 0x18053ED38 (--0-$tuple@V-$ComPtr@UIObjectArray@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0LL;
  v16[0] = a6;
  v16[1] = a5;
  v17 = a4;
  v18 = a3;
  v9 = AddRefCountWrappers<IObjectArray *,IVirtualDesktop *,unsigned int,unsigned int>((__int64)v16, (__int64)v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
            v16,
            v14);
    v10 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIObjectArray__PEAUIVirtualDesktop__II__ZV__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___56_II_CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIObjectArray__PEAUIVirtualDesktop__II_ZV__tuple_V__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___23_II_std___Z(
            a1,
            v12,
            v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  return v10;
}
