/*
 * XREFs of ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180580910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x1802D0888 (_lambda_eb7347f801496dc1bb0f8fceb055189e_--__lambda_eb7347f801496dc1bb0f8fceb055189e_.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180562958 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___ @ 0x1805805E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAsyncSwitchItemController::DragSwitchItem(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  __int64 v6; // rbx
  unsigned int ControllerApartment; // edi
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  struct ISwitchItem *v10; // [rsp+30h] [rbp-10h] BYREF
  struct IExternalDragCallback *v11; // [rsp+38h] [rbp-8h] BYREF
  struct IExternalDragCallback *v12; // [rsp+60h] [rbp+20h] BYREF
  struct ISwitchItem *v13; // [rsp+78h] [rbp+38h] BYREF

  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v12 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this
                                                                         + 2));
    v9 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    Windows::Internal::ComTaskPool::QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___(ControllerApartment, &v9);
    lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_(&v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  }
}
