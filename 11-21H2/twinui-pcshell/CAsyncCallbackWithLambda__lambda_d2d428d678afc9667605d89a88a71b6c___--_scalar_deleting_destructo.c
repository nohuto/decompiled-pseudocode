/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_scalar_deleting_destructor_ @ 0x1801617A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180140E00 (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease((volatile signed __int32 **)a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x38uLL);
  return a1;
}
