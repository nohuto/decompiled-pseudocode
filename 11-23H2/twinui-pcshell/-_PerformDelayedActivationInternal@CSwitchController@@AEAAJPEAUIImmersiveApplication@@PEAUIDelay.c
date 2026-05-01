/*
 * XREFs of ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x18059D700
 * Callers:
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802E5C96 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x18059CB40 (-PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActi.c)
 *     ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x18059CB50 (-RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800EACB8 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z @ 0x18059C73C (--$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x18059C7CC (Windows--Internal--ComTaskPool--QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::_lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x18059C864 (_lambda_5c8667dff346ed4d003bfb934b61e856_--_lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x18059C8D0 (_lambda_5c8667dff346ed4d003bfb934b61e856_--__lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_PerformDelayedActivationInternal(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        CSwitchController **a3,
        struct ISplashScreen *a4)
{
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v9; // eax
  int v10; // ebx
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  CSwitchController **v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CSwitchController *v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  v18 = this;
  v19 = 0LL;
  if ( a2
    && (v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a2 + 232LL),
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v19),
        v9 = v7(a2, AddressOf),
        v10 = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (int)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v18 = 0LL;
    if ( a4 )
    {
      v15 = &v18;
      v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *((__int64 **)&v15);
      Microsoft::WRL::AsAgile<ISplashScreen>((__int64)a4, v11);
    }
    v15 = a3;
    if ( a3 )
      (*((void (__fastcall **)(CSwitchController **))*a3 + 1))(a3);
    v12 = lambda_5c8667dff346ed4d003bfb934b61e856_::_lambda_5c8667dff346ed4d003bfb934b61e856_(
            v16,
            &v15,
            &v19,
            (__int64 *)&v18);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___(v13, v12);
    lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    if ( v10 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (int)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return (unsigned int)v10;
}
