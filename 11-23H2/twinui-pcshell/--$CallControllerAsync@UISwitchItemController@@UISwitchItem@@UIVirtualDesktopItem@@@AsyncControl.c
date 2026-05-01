/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x180580224
 * Callers:
 *     ?MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x180580AE0 (-MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180562958 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     ??$QueueTask@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x180580548 (--$QueueTask@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ @ 0x180580680 (--1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem,IVirtualDesktopItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 (__fastcall *v10)(__int64); // [rsp+20h] [rbp-38h] BYREF
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = *a1;
  if ( v7 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v7);
    v10 =  ISwitchItemController::`vcall'{72,{flat}};
    v11 = *a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v12 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13[0] = *a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>(ControllerApartment, &v10);
    _lambda_c2a2628a81f3a0afe82e0d81e4960563_::~_lambda_c2a2628a81f3a0afe82e0d81e4960563_((_lambda_c2a2628a81f3a0afe82e0d81e4960563_ *)&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a3);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a4);
}
