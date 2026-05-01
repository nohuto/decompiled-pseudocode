/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_scalar_deleting_destructor_ @ 0x1801D0C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___ @ 0x1801D06D4 (CDelayIAMOperations--CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___--_CDelayedOpe.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
