/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x18057F780
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x1802E4A4C (Windows--Internal--ComTaskPool--QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180562958 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___(
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
      Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___(
        ControllerApartment,
        (__int64)&v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
  }
}
