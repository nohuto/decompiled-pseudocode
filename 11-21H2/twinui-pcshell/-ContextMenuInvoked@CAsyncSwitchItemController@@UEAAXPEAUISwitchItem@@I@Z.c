/*
 * XREFs of ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1804C5ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804A3180 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x1804C5B28 (Windows--Internal--ComTaskPool--QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAsyncSwitchItemController::ContextMenuInvoked(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        int a3)
{
  __int64 v6; // rbx
  unsigned int ControllerApartment; // edi
  struct ISwitchItem *v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  struct ISwitchItem *v12; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v11 = *((_QWORD *)this + 2);
    v6 = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this
                                                                         + 2));
    v8 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v9 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___(
      ControllerApartment,
      (__int64)&v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
}
