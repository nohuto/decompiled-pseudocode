/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1803CC150
 * Callers:
 *     _lambda_00579e35fd3f40d9daeda2b75c1830f2_::_lambda_00579e35fd3f40d9daeda2b75c1830f2_ @ 0x1801D86B0 (_lambda_00579e35fd3f40d9daeda2b75c1830f2_--_lambda_00579e35fd3f40d9daeda2b75c1830f2_.c)
 *     CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___ @ 0x1801D8724 (CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___--CAsyncCallbackWithLambda__.c)
 *     CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D87A4 (CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___--CAsyncCallbackWithLambda__.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1803CB45C (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 228), a2);
  return result;
}
