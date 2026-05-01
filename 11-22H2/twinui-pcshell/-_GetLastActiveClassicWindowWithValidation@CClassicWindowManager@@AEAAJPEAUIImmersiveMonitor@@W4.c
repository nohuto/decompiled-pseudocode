/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x18004E33C
 * Callers:
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJW4GetLastActiveClassicWindowReason@@PEAU_FILETIME@@@Z @ 0x18004E1F0 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJW4GetLastActiveClassicWindowReason@@P.c)
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUHWND__@@@Z @ 0x18004E290 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4Ge.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x18004E3EC (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    CClassicWindowManager::_GetLastActiveClassicWindow(a1, a2, a3, &v11);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, int *))(*(_QWORD *)v11 + 40LL))(v11, v12, &v13);
    if ( v8 < 0 )
      break;
    if ( v13 )
    {
      v9 = v11;
      v11 = 0LL;
      *a4 = v9;
      break;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 72) + 72LL))(a1 + 72, v12[0]);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return (unsigned int)v8;
}
