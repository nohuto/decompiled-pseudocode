/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::_scalar_deleting_destructor_ @ 0x18002E480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 16);
  *(_QWORD *)a1 = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
