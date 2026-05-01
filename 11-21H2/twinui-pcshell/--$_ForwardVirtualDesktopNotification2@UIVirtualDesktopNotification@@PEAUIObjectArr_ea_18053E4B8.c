/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E4B8
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification@UIObjectArray@@UIVirtualDesktop@@U2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E688 (--$_ForwardVirtualDesktopNotification@UIObjectArray@@UIVirtualDesktop@@U2@@CVirtualDesktopNotifi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@1@@Z @ 0x18053DE38 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@@YAJV-$tuple@PEAUIObjectArr.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@V756@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@@Z @ 0x18053EA14 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU.c)
 *     ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@QEAA@$$QEAV01@@Z @ 0x18053ED88 (--0-$tuple@V-$ComPtr@UIObjectArray@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@@@23@V423@@std@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IObjectArray *,IVirtualDesktop *,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int128 v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  int v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v13 = 0LL;
  v14 = 0LL;
  *(_QWORD *)v15 = a5;
  v16 = a4;
  v17 = a3;
  v9 = AddRefCountWrappers<IObjectArray *,IVirtualDesktop *,IVirtualDesktop *>(v15, (__int64 *)&v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
            v15,
            &v13);
    v10 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIObjectArray__PEAUIVirtualDesktop__PEAU3___ZV__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___56_V756__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIObjectArray__PEAUIVirtualDesktop__1_ZV__tuple_V__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___23_V423__std___Z(
            a1,
            a2,
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
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return v10;
}
