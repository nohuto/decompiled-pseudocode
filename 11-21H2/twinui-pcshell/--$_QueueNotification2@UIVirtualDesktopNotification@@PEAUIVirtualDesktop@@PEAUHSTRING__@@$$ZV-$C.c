/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x18053EB4C
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x18053E5A0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??$QueueTask@V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@Z @ 0x18053E030 (--$QueueTask@V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__PEAUHSTRING______ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__PEAUHSTRING_____ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_23__std___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  struct IObjectArray *v16; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IObjectArray *v20; // [rsp+78h] [rbp+38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v20);
  v8 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v15 = a2;
    v16 = v20;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    string = *(HSTRING *)a3;
    *(_QWORD *)a3 = 0LL;
    v12 = (__int64 *)(a3 + 8);
    v18 = 0LL;
    if ( &v18 != (__int64 *)(a3 + 8) )
    {
      v18 = *v12;
      *v12 = 0LL;
    }
    v13 = Windows::Internal::ComTaskPool::QueueTask<_lambda_0a03d8c35eae13e641837af3dd88f6ff_>(
            v11,
            v10,
            *(_DWORD *)(a1 + 104),
            &v15);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v8;
  }
  *(_QWORD *)a3 = 0LL;
  return result;
}
