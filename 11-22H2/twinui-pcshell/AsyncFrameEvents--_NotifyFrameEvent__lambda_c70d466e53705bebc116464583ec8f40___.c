/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x18057F6B8
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180562958 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x18057F39C (Windows--Internal--ComTaskPool--QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___(__int64 a1, __int64 a2)
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
      Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___(ControllerApartment, &v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    }
  }
}
