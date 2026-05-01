/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804C4AA8
 * Callers:
 *     ?OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z @ 0x1804B1F10 (-OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z.c)
 *     ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C1E70 (-ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C2870 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2AF0 (-LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2FC0 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ @ 0x1804C4310 (-v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804A3180 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1804C4838 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+28h] BYREF

  v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( *(_QWORD *)a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
      v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
      v9 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v4);
      v6 = v3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
      v7[0] = (__int64)v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___(ControllerApartment, &v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    }
  }
}
