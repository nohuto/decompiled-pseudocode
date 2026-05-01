/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1804C57F8
 * Callers:
 *     ?CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C5E90 (-CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C60E0 (-InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C61E0 (-MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C6350 (-SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804A3180 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     ??$QueueTask@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_52ee436932253a320c8b1bf838bed70e_@@@Z @ 0x1804C5A8C (--$QueueTask@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = *a1;
  if ( v6 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v6);
    v9 = a2;
    v10 = *a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11[0] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_52ee436932253a320c8b1bf838bed70e_>(ControllerApartment, &v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a3);
}
