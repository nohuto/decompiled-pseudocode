/*
 * XREFs of ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180156B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18002B534 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180156C04 (-_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEA.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180156CC8 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802EEF2C (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 */

int __fastcall CImmersiveWindowManager::HandleWindowAction(
        __int64 a1,
        IUnknown *a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        int a5,
        struct ITaskWindow *a6)
{
  __int64 v7; // r8
  int result; // eax

  v7 = 0LL;
  result = -2147024809;
  switch ( a5 )
  {
    case 0:
      return CImmersiveWindowManager::_HandleApplicationCreation((IUnknown *)(a1 - 160), a2, a4, a6);
    case 2:
      return CImmersiveWindowManager::_HandleApplicationActivation(
               (CImmersiveWindowManager *)(a1 - 160),
               (struct IImmersiveApplicationInternal *)a2,
               a3);
    case 6:
      return CImmersiveWindowManager::_RemoveApplication(
               (CImmersiveWindowManager *)(a1 - 160),
               (struct IImmersiveApplicationInternal *)a2);
    case 1:
      return ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, struct ITaskWindow *))a2->lpVtbl[2].QueryInterface)(
               a2,
               a4,
               v7,
               a6);
    case 5:
      return ((__int64 (__fastcall *)(IUnknown *, HWND, _QWORD, _QWORD))a2->lpVtbl[4].Release)(a2, a3, 0LL, 0LL);
    case 7:
      return ((__int64 (__fastcall *)(IUnknown *, HWND, _QWORD))a2->lpVtbl[2].AddRef)(a2, a3, 0LL);
    case 8:
      return CImmersiveWindowManager::_HandleApplicationPrecreation(
               (IUnknown *)(a1 - 160),
               (struct IImmersiveApplicationInternal *)a2);
  }
  if ( a5 > 8 && a5 <= 11 )
  {
    if ( a5 == 9 )
    {
      v7 = 1LL;
    }
    else if ( a5 == 10 )
    {
      v7 = 2LL;
    }
    else
    {
      v7 = 3LL;
    }
    return ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, struct ITaskWindow *))a2->lpVtbl[2].QueryInterface)(
             a2,
             a4,
             v7,
             a6);
  }
  return result;
}
