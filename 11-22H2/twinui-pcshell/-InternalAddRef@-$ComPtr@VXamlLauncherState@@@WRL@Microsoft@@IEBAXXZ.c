/*
 * XREFs of ?InternalAddRef@?$ComPtr@VXamlLauncherState@@@WRL@Microsoft@@IEBAXXZ @ 0x180505E7C
 * Callers:
 *     _lambda_970a4c8158850becbf4915e24a83312a_::_lambda_970a4c8158850becbf4915e24a83312a_ @ 0x180201E74 (_lambda_970a4c8158850becbf4915e24a83312a_--_lambda_970a4c8158850becbf4915e24a83312a_.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlLauncherState>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 60), a2);
  return result;
}
