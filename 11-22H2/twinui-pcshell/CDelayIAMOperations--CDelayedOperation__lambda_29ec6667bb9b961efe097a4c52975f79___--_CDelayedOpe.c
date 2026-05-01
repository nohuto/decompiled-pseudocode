/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___ @ 0x1801D06D4
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_scalar_deleting_destructor_ @ 0x1801D0C00 (CDelayIAMOperations--CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___::_CDelayedOperation__lambda_29ec6667bb9b961efe097a4c52975f79___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
