/*
 * XREFs of ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x18006595C
 * Callers:
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18000CC20 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z @ 0x18017E840 (-HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::_DeactivatePrevActiveApp(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  v4 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 216))(
         **(_QWORD **)(a1 + 216),
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  return (unsigned int)v4;
}
