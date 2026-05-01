/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18010F6E0
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@Z0@Z @ 0x18010F65C (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVir.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@ComTaskPool@Internal@Windows@@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@Z @ 0x18010F810 (--$Make@V-$CTaskWrapper@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@ComTaskPool@Internal@Window.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIApplicationView____ZV__ComPtr_UIApplicationView___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIApplicationView___ZV__tuple_V__ComPtr_UIApplicationView___WRL_Microsoft___std___Z(
        __int64 a1,
        struct IObjectArray *a2,
        _QWORD *a3)
{
  int CallbackArray; // eax
  int v6; // esi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 (*v11)(void); // [rsp+30h] [rbp-20h] BYREF
  struct IObjectArray *v12; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IObjectArray *v15; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v16; // [rsp+90h] [rbp+40h]
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v16 = a3;
  v15 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    a2);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v15);
  v6 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  else
  {
    v11 =  IVirtualDesktopNotification::`vcall'{80,{flat}};
    v12 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v13[0] = 0LL;
    if ( v13 != a3 )
    {
      v13[0] = *a3;
      *a3 = 0LL;
    }
    v7 = *(_DWORD *)(a1 + 104);
    v8 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_87aff4db6c45ef86a8c611dd5aaf2244_>,_lambda_87aff4db6c45ef86a8c611dd5aaf2244_>(
                      &v17,
                      &v11);
    v9 = *v8;
    *v8 = 0LL;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    v6 = SHTaskPoolQueueTask(0LL, 2LL, v7, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a3);
  return (unsigned int)v6;
}
