/*
 * XREFs of wil::details::lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___::_lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___ @ 0x1803C24C8
 * Callers:
 *     _TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor$6 @ 0x18021B015 (_TaskFlowImmersiveShellBroker--ReinitializeObjects_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_09002843fc292861b66de9ebeae70798_::operator() @ 0x1800A7F3C (_lambda_09002843fc292861b66de9ebeae70798_--operator().c)
 */

int *__fastcall wil::details::lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___::_lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int *result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_09002843fc292861b66de9ebeae70798_::operator()(*(int ***)a1, 7u, a3, a4);
  }
  return result;
}
