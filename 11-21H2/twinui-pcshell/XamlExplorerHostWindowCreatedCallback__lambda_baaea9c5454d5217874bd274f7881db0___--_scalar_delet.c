/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___::_scalar_deleting_destructor_ @ 0x180430BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042E794 (_lambda_baaea9c5454d5217874bd274f7881db0_--__lambda_baaea9c5454d5217874bd274f7881db0_.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
