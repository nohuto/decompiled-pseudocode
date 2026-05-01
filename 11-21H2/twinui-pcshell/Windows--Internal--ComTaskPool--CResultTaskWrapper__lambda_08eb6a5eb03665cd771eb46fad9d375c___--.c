/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08eb6a5eb03665cd771eb46fad9d375c___::Run @ 0x180165520
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_08eb6a5eb03665cd771eb46fad9d375c_::operator() @ 0x180165548 (_lambda_08eb6a5eb03665cd771eb46fad9d375c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08eb6a5eb03665cd771eb46fad9d375c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_08eb6a5eb03665cd771eb46fad9d375c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
