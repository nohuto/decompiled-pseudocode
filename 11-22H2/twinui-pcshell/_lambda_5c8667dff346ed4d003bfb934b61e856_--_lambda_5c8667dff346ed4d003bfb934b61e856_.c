/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::_lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x18059C864
 * Callers:
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x18059D700 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::_lambda_5c8667dff346ed4d003bfb934b61e856_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  v6 = a1 + 1;
  *v6 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  v7 = *a4;
  a1[2] = *a4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return a1;
}
