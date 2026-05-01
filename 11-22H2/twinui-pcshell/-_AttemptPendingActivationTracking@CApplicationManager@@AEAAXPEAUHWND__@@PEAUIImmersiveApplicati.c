/*
 * XREFs of ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1803A1ACC
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C7C0 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1803937B4 (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_AttemptPendingActivationTracking(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication *a3)
{
  HWND ForegroundWindow; // rax
  HWND v7; // rdi
  int *v8; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10[4]; // [rsp+38h] [rbp-20h] BYREF
  struct IImmersiveApplication *v11; // [rsp+78h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v7 = ForegroundWindow;
  if ( !ForegroundWindow || ForegroundWindow == a2 )
  {
    v11 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v8 = (int *)*((_QWORD *)this + 100);
    v9[0] = this;
    v9[1] = a2;
    v9[2] = v7;
    v10[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___(v8, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  }
}
