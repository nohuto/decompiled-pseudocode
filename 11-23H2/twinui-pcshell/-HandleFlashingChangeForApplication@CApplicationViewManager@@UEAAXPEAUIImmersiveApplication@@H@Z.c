/*
 * XREFs of ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x1803CC0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1803CB5F8 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationViewManager::HandleFlashingChangeForApplication(
        CApplicationViewManager *this,
        struct IImmersiveApplication *a2,
        int a3)
{
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IImmersiveApplication *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v6[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  v6[1] = (__int64)this - 160;
  CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___(
    (__int64)this - 160,
    v6,
    a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
}
