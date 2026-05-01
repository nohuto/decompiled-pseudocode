/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___ @ 0x18057F5DC
 * Callers:
 *     ?KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18057D3D0 (-KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180562958 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___ @ 0x18057F264 (Windows--Internal--ComTaskPool--QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+28h] [rbp-18h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
      v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
      v9 = v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v5);
      v7 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
      v8[0] = (__int64)v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = *a2;
      Windows::Internal::ComTaskPool::QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___(ControllerApartment, &v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
  }
}
