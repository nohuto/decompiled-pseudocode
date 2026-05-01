/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cf8fce5bcb9a969599706c6ca6cec37d___::Run @ 0x180416B60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cf8fce5bcb9a969599706c6ca6cec37d_::operator() @ 0x1804130B4 (_lambda_cf8fce5bcb9a969599706c6ca6cec37d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cf8fce5bcb9a969599706c6ca6cec37d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_cf8fce5bcb9a969599706c6ca6cec37d_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
