/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::_scalar_deleting_destructor_ @ 0x180487670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
