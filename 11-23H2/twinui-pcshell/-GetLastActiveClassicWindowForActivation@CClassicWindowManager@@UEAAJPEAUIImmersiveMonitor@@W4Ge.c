/*
 * XREFs of ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUHWND__@@@Z @ 0x18004E290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x18004E33C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicWindowForActivation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v7; // r14
  int LastActiveClassicWindowWithValidation; // ebx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v7 = a1 - 72;
  while ( 1 )
  {
    v10[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                              v7,
                                              a2,
                                              a3,
                                              v10);
    if ( LastActiveClassicWindowWithValidation >= 0 )
      LastActiveClassicWindowWithValidation = (*(__int64 (__fastcall **)(__int64, _QWORD *, int *))(*(_QWORD *)v10[0]
                                                                                                  + 40LL))(
                                                v10[0],
                                                a4,
                                                &v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    if ( LastActiveClassicWindowWithValidation < 0 )
      break;
    if ( v11 )
      return (unsigned int)LastActiveClassicWindowWithValidation;
  }
  *a4 = 0LL;
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
