/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@V756@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@@Z @ 0x18053EA14
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E4B8 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E4B8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$QueueTask@V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@Z @ 0x18053E1E8 (--$QueueTask@V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@QEAA@$$QEAV01@@Z @ 0x18053ED88 (--0-$tuple@V-$ComPtr@UIObjectArray@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@@@23@V423@@std@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIObjectArray__PEAUIVirtualDesktop__PEAU3___ZV__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___56_V756__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIObjectArray__PEAUIVirtualDesktop__1_ZV__tuple_V__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___23_V423__std___Z(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  struct IObjectArray *v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IObjectArray *v19; // [rsp+88h] [rbp+38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v19);
  v8 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v13 = a2;
    v14 = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
      &v15,
      a3);
    v11 = Windows::Internal::ComTaskPool::QueueTask<_lambda_4a1cc2f9c280bc637b058ad40df178d7_>(
            v10,
            v9,
            *(_DWORD *)(a1 + 104),
            &v13);
    v8 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a3 + 2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  return v8;
}
