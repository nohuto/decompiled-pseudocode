/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::_scalar_deleting_destructor_ @ 0x18005D060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
