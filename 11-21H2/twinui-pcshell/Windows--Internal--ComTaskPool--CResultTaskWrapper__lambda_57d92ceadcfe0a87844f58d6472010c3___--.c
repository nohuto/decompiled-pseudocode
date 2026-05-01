/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_57d92ceadcfe0a87844f58d6472010c3___::Run @ 0x180416870
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_57d92ceadcfe0a87844f58d6472010c3_::operator() @ 0x180411FA4 (_lambda_57d92ceadcfe0a87844f58d6472010c3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_57d92ceadcfe0a87844f58d6472010c3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_57d92ceadcfe0a87844f58d6472010c3_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
