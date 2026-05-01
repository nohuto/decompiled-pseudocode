/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJH@ZV?$tuple@H@std@@@Z @ 0x18053E6E4
 * Callers:
 *     ?VirtualDesktopIsPerMonitorChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJH@Z @ 0x18053F830 (-VirtualDesktopIsPerMonitorChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$QueueTask@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Z @ 0x18053E0C4 (--$QueueTask@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__H__ZH_CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJH_ZV__tuple_H_std___Z(
        __int64 a1,
        struct IObjectArray *a2,
        int *a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  struct IObjectArray *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IObjectArray *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v16);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    *(_QWORD *)v12 =  IVirtualDesktopNotification::`vcall'{56,{flat}};
    v13 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v14 = *a3;
    v10 = Windows::Internal::ComTaskPool::QueueTask<_lambda_141e1a56e61cb55b5c4011860e8cf798_>(
            v9,
            v8,
            *(_DWORD *)(a1 + 104),
            (__int64)v12);
    v7 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v10);
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
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v7;
}
