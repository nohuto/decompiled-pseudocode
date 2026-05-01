/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_scalar_deleting_destructor_ @ 0x180789440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788C34 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
