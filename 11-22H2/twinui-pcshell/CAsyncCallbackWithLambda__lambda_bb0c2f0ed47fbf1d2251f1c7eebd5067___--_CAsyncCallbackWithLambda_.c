/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___ @ 0x1802170DC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_scalar_deleting_destructor_ @ 0x180217E30 (CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___--_scalar_deleting_destructo.c)
 * Callees:
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_ @ 0x180217040 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--__lambda_57ccf274084369bdcaf7e64bf986fb01_.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___(
        __int64 a1)
{
  lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
}
