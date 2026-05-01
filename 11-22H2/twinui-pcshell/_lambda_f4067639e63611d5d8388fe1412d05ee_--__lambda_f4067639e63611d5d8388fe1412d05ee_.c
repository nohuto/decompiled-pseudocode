/*
 * XREFs of _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x180576B9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::_scalar_deleting_destructor_ @ 0x180576D20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___--_scala.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180577080 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[2];
  if ( v2 )
    CoTaskMemFree(v2);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
