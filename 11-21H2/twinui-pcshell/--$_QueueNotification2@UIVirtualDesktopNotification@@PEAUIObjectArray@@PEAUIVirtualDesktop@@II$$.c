/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@@Z @ 0x18053E8F0
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z01II@Z @ 0x18053E3E0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E3E0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$QueueTask@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053E27C (--$QueueTask@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA@$$QEAV01@@Z @ 0x18053ED38 (--0-$tuple@V-$ComPtr@UIObjectArray@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIObjectArray__PEAUIVirtualDesktop__II__ZV__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___56_II_CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIObjectArray__PEAUIVirtualDesktop__II_ZV__tuple_V__ComPtr_UIObjectArray___WRL_Microsoft__V__ComPtr_UIVirtualDesktop___23_II_std___Z(
        __int64 a1,
        struct IObjectArray *a2,
        __int64 a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 (__fastcall *v12)(__int64); // [rsp+20h] [rbp-30h] BYREF
  struct IObjectArray *v13; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IObjectArray *v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h]

  v19 = a3;
  v18 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v18);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v12 =  IVirtualDesktopNotification::`vcall'{64,{flat}};
    v13 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
      v14,
      a3);
    v10 = Windows::Internal::ComTaskPool::QueueTask<_lambda_98a8142f581a4fdcd56dbd206b43412c_>(
            v9,
            v8,
            *(_DWORD *)(a1 + 104),
            &v12);
    v7 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a3 + 16));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a3 + 8));
  return v7;
}
