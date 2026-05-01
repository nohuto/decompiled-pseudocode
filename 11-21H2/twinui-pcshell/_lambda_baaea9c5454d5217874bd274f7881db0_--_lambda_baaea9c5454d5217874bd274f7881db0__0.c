/*
 * XREFs of _lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0__0 @ 0x18042D158
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18041FB88 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18041FB88.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0__0(
        __int64 a1,
        volatile int *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        _OWORD *a6,
        _OWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 a13)
{
  _QWORD *v14; // r9
  __int64 v16; // rcx

  v14 = a3;
  v16 = *(_QWORD *)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( v16 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v16 + 148), a2);
  *(_QWORD *)(a1 + 8) = *v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = __abi_winrt_ptr_ctor(*a5);
  *(_OWORD *)(a1 + 32) = *a6;
  *(_OWORD *)(a1 + 48) = *a7;
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*a8);
  *(_QWORD *)(a1 + 72) = __abi_winrt_ptr_ctor(*a9);
  *(_QWORD *)(a1 + 80) = *a10;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*a11);
  *(_QWORD *)(a1 + 96) = __abi_winrt_ptr_ctor(*a12);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 104,
    a13);
  *(_QWORD *)(a1 + 104) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
