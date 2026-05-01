/*
 * XREFs of wil::details::lambda_call__lambda_9489e6e8268e11dd326d2e0d6864e1a0___::_lambda_call__lambda_9489e6e8268e11dd326d2e0d6864e1a0___ @ 0x18037C89C
 * Callers:
 *     __lambda_db776e8ce77c2c191d2fdbaad842576b_::operator()_::_1_::dtor$1 @ 0x18037CD92 (__lambda_db776e8ce77c2c191d2fdbaad842576b_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_9489e6e8268e11dd326d2e0d6864e1a0___::_lambda_call__lambda_9489e6e8268e11dd326d2e0d6864e1a0___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 16) = 0;
    *(_BYTE *)(v1 + 808) = 0;
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
}
